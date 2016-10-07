#pragma once

#include <cstring>
#include <boost/variant.hpp>

namespace turbodbc {

struct rows {
    rows(std::size_t rows_to_buffer_);
    std::size_t rows_to_buffer;
};

struct megabytes {
    megabytes(std::size_t megabytes_to_buffer);
    std::size_t bytes_to_buffer;
};

using buffer_size = boost::variant<rows, megabytes>;

class determine_buffer_size
    : public boost::static_visitor<std::size_t>
{
public:
    std::size_t operator()(rows const& r)const;
    std::size_t operator()(megabytes const& m) const;
};

}
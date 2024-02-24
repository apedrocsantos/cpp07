# CPP07

## Templates

```CPP
template <typename T>
T const & max(T const &x, T const &y)
{
    return (x >= y ? x : y);
}

int foo(int x)
{
    return (x);
}

int main()
{
    int a = 21;
    int b = 42;

    std::cout << max<int>(a, b) << "\n"; // Explicit instanciation
    std::cout << max(a, b) << "\n"; // Implicit instanciation

    float c = -21.1f;
    float d = 4.2f;

    std::cout << max<float>(c, d) << "\n"; // Explicit instanciation
    std::cout << max(c, d) << "\n"; // Implicit instanciation

    char e = 'e';
    char f = 'f';

    std::cout << max<char>(e,f) << "\n"; // Explicit instanciation
    std::cout << max(e,f) << "\n"; // Implicit instanciation

    int ret = max<int>(foo(a), foo(b)); // Explicit instanciation
    std::cout << ret << "\n";
}
```

## Default Types

```CPP
template <typename T = float> // Default type is float
class Vertex
{
    public:
    Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z)
    
    // Etc..
};

// << operator overload

template <typename T>
std::ostream & operator<<(std::ostream& o, Vertex<T> const &v)
{
    std::cout << v.getX() << v.getY() << v.getZ();
    return o;
}
```

## Specialization

```CPP
// Generic template
template <typename T, typename U>
class Pair
{
    Pair<T, U>(T const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs)
    {
        // Etc
    }
    T const& fst(void) const {return this->_lhs;}
    T const& snd(void) const {return this->_rhs;}
}

// Int partial specialization template
template <typename U>
class Pair<int, U> //
{
    Pair<int, U>(int const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs)
    {
        // Etc
    }
}

// bool/bool specialization
template <>
class Pair<bool, bool>
{
    Pair<bool, bool>(bool const &lhs, bool const &rhs)
    {
        // Etc
    }
}

template<typename T, typename U>
std::ostream& operator<<(std::ostream& o, Pair<T, U> const& p)
{
    o << p.fst() << p.scd() << "\n";
    return (o);
}

// Specialized ostream
std::ostream& operator<<(std::ostream& o, Pair<bool, bool> const& p)
{
    o << p.fst() << p.scd() << "\n";
    return (o);
}
```
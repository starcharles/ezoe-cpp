// labmda
//int main()
//{
//    auto twice = [](auto x)
//    {
//        std::cout << x << " "s << x << "\n"s ;
//    } ;
//
//    auto print_two = []( auto x, auto y )
//    {
//        std::cout << x << " "s << y << "\n"s ;
//    } ;
//
//    auto print_mul = []( auto x, auto y )
//    {
//        std::cout << x * y << "\n"s ;
//    } ;
//    twice(5) ;
//    print_two( 1, 2 ) ;
//    print_two( "Pi is", 3.14 ) ;
//    print_mul(2,3);
//
//    auto plus = []( auto x, auto y )
//    { return x + y ; } ;
//
//    std::cout
//            << plus( 1, 2 ) << "\n"s
//            << plus( 1.5, 0.5 ) << "\n"s
//            << plus( "123"s, "456"s) ;
//
//    std::cout << "\n" <<[]( auto x, auto y )
//    { return x + y ; }(1,2) ;
//}

// function
int plus( int x, int y )
{
    return x + y ;
}

int main()
{
    auto x = plus( 1, 2 ) ;
    std::cout << x << "\n";

    std::cout << std::boolalpha ;

    // false
    bool Zero = 0 ;

    // すべてtrue
    bool One = 1 ;
    bool minus_one = -1 ;
    bool OneTwoThree = 123 ;

    std::cout << Zero << "\n";
    std::cout << One << "\n";
    std::cout << minus_one  << "\n";
    std::cout << OneTwoThree << "\n";
}

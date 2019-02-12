//int main()
//{
//    std::cout << "aaa"s << "bbb"s << "ccc"s ;
//    std::cout << "\\n is a new-line.\n" ;
//    // 整数の変数
//    auto answer = 42 ;
//    std::cout << answer << "\n"s ;
//    // 浮動小数点数の変数
//    auto pi = 3.14 ;
//    std::cout << pi << "\n"s ;
//
//    // 文字列の変数
//    auto question = "Life, The Universe, and Everything."s ;
//    std::cout << question ;
//    auto a = 1 ;
//    auto b(2) ;
//    auto c{3} ;
//    std::cout << a ;
//    std::cout << b ;
//    std::cout << c ;
//}


//int main()
//{
//    int i           = 123 ;
//    double d        = 1.23 ;
//    std::string s   = "123"s ;
//
//    std::cout << i << d << s ;
//}

// labmda
int main()
{
    auto twice = [](auto x)
    {
        std::cout << x << " "s << x << "\n"s ;
    } ;

    auto print_two = []( auto x, auto y )
    {
        std::cout << x << " "s << y << "\n"s ;
    } ;

    auto print_mul = []( auto x, auto y )
    {
        std::cout << x * y << "\n"s ;
    } ;
    twice(5) ;
    print_two( 1, 2 ) ;
    print_two( "Pi is", 3.14 ) ;
    print_mul(2,3);

    auto plus = []( auto x, auto y )
    { return x + y ; } ;

    std::cout
            << plus( 1, 2 ) << "\n"s
            << plus( 1.5, 0.5 ) << "\n"s
            << plus( "123"s, "456"s) ;

    std::cout << "\n" <<[]( auto x, auto y )
    { return x + y ; }(1,2) ;
}

// function

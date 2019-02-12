int input()
{
    std::cout << ">"s ;
    int x {} ;
    std::cin >> x ;
    return x ;
}

int main()
{
    int sum = 0 ;

//    while( true )
//    {
//        sum += input() ;
//        std::cout << sum << "\n"s ;
//    }

    while( ( x = input() ) != 0 )
    {
        sum += x ;
        std::cout << sum << "\n"s ;
    }
}
#include <iostream>
// DATA TYPES
/*
    int     -> (-2,147,483,648) to (2,147,483,647)
    char    -> (-128) to (127)
    float   -> (-3.4 * 10^(-38)) to (3.4 * 10^(38))
    double  -> (-1.7 * 10^(-308)) to (1.7 * 10^(308))
    bool    -> (1) or (0)
    unsigned int     -> (0) to (2,147,483,647 * 2)
    unsigned char    -> (0) to (255)
    long int         -> 8 bytes
    long double      -> 10 bytes

*/
// ASCII values
/*
    A -> 65 ; a -> 97
    B -> 66 ; b -> 98
    C -> 67 ; c -> 99
    D -> 68 ; d -> 100
    E -> 69 ; e -> 101
    F -> 70 ; f -> 102
    G -> 71 ; g -> 103
    H -> 72 ; h -> 104
    I -> 73 ; i -> 105
    J -> 74 ; j -> 106
    K -> 75 ; k -> 107
    L -> 76 ; l -> 108
    M -> 77 ; m -> 109
    N -> 78 ; n -> 110
    O -> 79 ; o -> 111
    P -> 80 ; p -> 112
    Q -> 81 ; q -> 113
    R -> 82 ; r -> 114
    S -> 83 ; s -> 115
    T -> 84 ; t -> 116
    U -> 85 ; u -> 117
    V -> 86 ; v -> 118
    W -> 87 ; w -> 119
    X -> 88 ; x -> 120
    Y -> 89 ; y -> 121
    Z -> 90 ; z -> 122
*/
/*
    0 -> 48
    1 -> 49
    2 -> 50
    3 -> 51
    4 -> 52
    5 -> 53
    6 -> 54
    7 -> 55
    8 -> 56
    9 -> 57
*/
int main(int argc, char const *argv[])
{
    int j = 64;
    char k = 96;
    int l = 96;
    for (char i = 65; i < 91; i++)
    {
        j++;
        k++;
        l++;
        std::cout << "\n"
                  << i << " -> " << j << " , " << k << " -> " << l;
    }
    std::cout << "\n";
    // int n = 47;
    // for (char m = 48; m < 58; m++)
    // {
    //     n++;
    //     std::cout << "\n"
    //               << m << " -> " << n;
    // }
    int n = 0;
    for (char m = 1; m < 7; m++)
    {
        n++;
        std::cout << "\n"
                  << m << " -> " << n;
    }

    return 0;
}

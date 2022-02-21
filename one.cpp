#include <iostream>
#include <vector>

int main(){

    int item{77};

    std::cout << "Enter an item to search for: " << '\n';
    std::cin >> item;


    std::vector <std::vector <int>> mat = {{45, 77, 93},
                                           {78, 79, 85},
                                           {72, 96, 77}};

//    int *mat[3][3]{ new int([3][3]){45, 77, 93},
//                            {78, 79, 85},
//                            {72, 96, 77}}
//        };

    int x{}, y{};

    bool found;
    for (int row = 0; row < mat.size(); ++row)
        for (int col = 0; col < mat[row].size(); ++col)
            if (mat[row][col] == item){
                y = row;
                x = col;
                found = true;
            }
            else
                found = false;
    if (found)
        std::cout << "item found at " << y << ", " << x << '\n';
    else
        std::cout << "item not found" << '\n';

    return 0;
}
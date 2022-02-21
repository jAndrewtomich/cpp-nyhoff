#include <iostream>
#include <vector>

void main(){

    int item{77};

    std::cout << "Enter an item to search for: " << '\n';
    std::cin >> item;

    std::vector <std::vector <int>> mat = {{45, 77, 93},
                                           {78, 79, 85},
                                           {72, 96, 77}};

    int x = mat.size();

    bool found;
    for (int row = 0; row < x; ++row)
        for (int col = 0; col < mat[row].size(); ++col)
            if (mat[row][col] == item)
                found = true;
            else
                found = false;
    if (found)
        std::cout << "item found" << '\n';
    else
        std::cout << "item not found" << '\n';
}
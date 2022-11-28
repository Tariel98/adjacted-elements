#include <iostream>
#include <vector>

std::vector<int> smaal_adjacted_elements(std::vector<int> my_vec)
{   
    std::vector<int> result;

    int i = 1;
    int size  = my_vec.size() - 1;

    for(i; i<size; ++i)
    {
        if(my_vec[i] < my_vec[i + 1] && my_vec[i] < my_vec[i - 1])
            result.push_back(my_vec[i]);
    }

    return result;
}

int main () 
{
    std::vector<int> vec = {4, 5, 2, 7, 9};

    std::vector<int> result  = smaal_adjacted_elements(vec);

    for(int i=0; i<result.size(); ++i)
        std::cout << result[i] << " ";
    std::cout << std::endl;
}
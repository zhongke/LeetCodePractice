/* Given an array of integers, return indices of the two numbers such that they
   add up to a specific target. */

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;
/*
 * Check if the array has duplicated numbers
 * Check if there are one more matched group
 */

int main()
{
        int array[] = {15, 7, 9, 2};
        int i_number1 = 0, i_number2 = 0, i_sum = 0;
        int index[] = {0, 0};

        bool matched = false;


        for (int i = 0; i < 4; i++) {
                for (int j = i + 1; j < 4; j++) {
                        for (int k = 0; k < 4; k++) {

                                if ((k != i && k != j) && (array[i] + array[j] == array[k])) {
                                        matched = true;
                                        i_number1 = i;
                                        i_number2 = j;
                                        i_sum = k;
                                        cout << "i_number1 : " << i_number1 << " : " << array[i] << endl;
                                        cout << "i_number2 : " << i_number2 << " : " << array[j] << endl;
                                        cout << "i_sum     : " << k         << " : " << array[k] << endl;

                                }

                                if (matched) break;
                        }

                        if (matched) break;
                }

                if (matched) break;
        }

        return 0;
}

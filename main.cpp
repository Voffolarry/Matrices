//Program to perform a series of operations on 2x2 and 3x3 matrices

#include <iostream>
#include "fonctions/matrice2x2.h"
#include "fonctions/matrice3x3.h"

int main(int argc, char**argv){
    int choice;
    std::cout << "Welcome to this program concerning matrices." << std::endl;
    std::cout << "Choose what matrix you want to work with:\n 1. 2x2 matrix \n 2. 3x3 matrix  " << std::endl;
    std::cin >> choice;
double arr1[2][2], arr2[2][2],result[2][2],transpose1[2][2],transpose2[2][2],inverse[2][2];
double ar1[3][3], ar2[3][3],res[3][3], transp1[3][3], transp2[3][3],inv1[3][3],inv2[3][3];;
    if (choice == 1)
    {
         int ch;
        std::cout << "Choose the operation you want to perform on the matrix: \n 1. Addition.\n 2. Subtraction.\n 3. Multiplication.\n 4. Finding the Determinant.\n 5. Finding the Transpose.\n 6. Finding the Inverse.\n 7. Finding the Trace." << std::endl;
        std::cin >> ch;
        switch(ch)
        {
            case 1:
            {
                
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);
                std::cout << "The sum of the matrices: "<< std::endl;
                sum(arr1,arr2);
                

            }break;
            case 2:
            {
                
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);
                std::cout << "The difference of the matrices: "<< std::endl;
                sub(arr1,arr2);

            }break;
            case 3:
            {
               
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);
                std::cout << "The product of the matrices: "<< std::endl;
                mult(arr1,arr2,result);
                

            }break;
            case 4:
            {               
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);
                
                std::cout <<"The Determinant of the first matrix is: "<< std::endl;
                det_arr_2_by_2(arr1);
                std::cout <<"The Determinant of the second matrix is: "<< std::endl;
                det_arr_2_by_2(arr2);

            }break;
            case 5:
             {
                

                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);
                
                std::cout <<"The transpose of the first matrix: " <<  std::endl;
                trans_arr_2_by_2(arr1,transpose1);
                std::cout <<"The transpose of the second matrix: " << std::endl;
                trans_arr_2_by_2(arr1,transpose2);

            }break;
            case 6:
             {
                
               
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);
                std::cout <<"The inverse of the first matrix is: "<< std::endl;
                inv_arr_2_by_2(arr1, inverse);
                std::cout <<"The inverse of the second matrix is: "<< std::endl;
                inv_arr_2_by_2(arr2, inverse);

            }break;
            case 7:
             {
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr(arr1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr(arr2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr(arr1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr(arr2);

                std::cout <<"The trace of the first matrix: "<< trace_arr2x2(arr1) <<  std::endl;

                std::cout <<"The trace of the second matrix: "<< trace_arr2x2(arr2) << std::endl;

            }break;
        }

    }else if (choice == 2)//3 by 3 matrix
    {
        int ch;
        std::cout << "Choose the operation you want to perform on the matrix: \n 1. Addition.\n 2. Subtraction.\n 3. Multiplication.\n 4. Finding the Determinant.\n 5. Finding the Transpose.\n 6. Finding the Inverse.\n 7. Finding the Trace." << std::endl;
        std::cin >> ch;
        switch(ch)
        {
            case 1:
            {
                
                
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);
                std::cout << "The sum of the matrices: "<< std::endl;
                sum_3_by_3(ar1,ar2);


            }break;
            case 2:
             {
                
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);
                std::cout << "The difference of the matrices: "<< std::endl;
                sub_3_by_3(ar1,ar2);
            }break;
            case 3:
             {
                
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);
               
                std::cout << "The product of the matrices: "<< std::endl;
                mult_3_by_3(ar1,ar2,res);
            }break;
            case 4:
             {
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);

                
                std::cout <<"The Determinant of the first matrix is: "<< std::endl;
                det_arr_3_by_3(ar1);
                std::cout <<"The Determinant of the second matrix is: "<< std::endl;
                det_arr_3_by_3(ar2);

            }break;
            case 5:
             {
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);
                
                std::cout <<"The transpose of the first matrix: " <<  std::endl;
                trans_arr3x3(ar1,transp1);
                std::cout <<"The transp of the second matrix: " << std::endl;
                trans_arr3x3(ar1,transp2);

            }break;
            case 6:
             {
               
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);

                std::cout <<"The inverse of the first matrix is: "<< std::endl;
                inv_arr_3_by_3(ar1, inv1);
                std::cout <<"The inverse of the second matrix is: "<< std::endl;
                inv_arr_3_by_3(ar2, inv2);
            }break;
            case 7:
             {
                std::cout << "Fill the first matrix: "<<std::endl;
                fill_arr3x3(ar1);
                std::cout << "Fill the second matrix: "<<std::endl;
                fill_arr3x3(ar2);
                std::cout <<"First matrix: "<<std::endl;   
                display_arr3x3(ar1);
                std::cout <<"Second matrix: "<<std::endl;   
                display_arr3x3(ar2);

                std::cout <<"The trace of the first matrix: "<< trace_arr3x3(ar1) <<  std::endl;

                std::cout <<"The trace of the second matrix: "<< trace_arr3x3(ar2) << std::endl;

            }break;
        }

    }else
    {
        std::cout << " Make a valid choice" << std::endl;
    }


    return 0;
}
#include <iostream>
#include <stdio.h>
// implementation of the functions and procedures for 2 by 2

void display_arr(double arr[2][2])
{
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
            printf("%.1f ",arr[i][j]);
        }
        printf("\n");

    }
}

void sum(double arr1[2][2],double arr2[2][2] )
{
    double add_arr[2][2];
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
         add_arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    display_arr(add_arr);

}
void sub(double arr1[2][2],double arr2[2][2])
{
     double sub_arr[2][2] ;
     for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sub_arr[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
      display_arr(sub_arr);


}
void mult(double arr1[2][2],double arr2[2][2],double result[2][2])
{
    
     for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           result[i][j]=0;
            for(int t=0;t<2;t++){
                result[i][j] += arr1[i][t] * arr2[t][j];

            }
        }
    }
      display_arr(result);
}

void fill_arr(double arr[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            std::cout << "Element(" << i+1 << "," << j+1 << "):";
            std::cin >> arr[i][j];
        }
    }
}
double det_arr_2_by_2(double arr[2][2]){
     
    return (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
}

void inv_arr_2_by_2(double arr[2][2],double inverse[2][2]){
    double det=det_arr_2_by_2(arr);
    if (det==0){
        std::cout <<"The matrix doesn't have an inverse" << std::endl;
    }
    double inverse_of_det = 1/det;
    inverse[0][0]= arr[1][1] * inverse_of_det;
    inverse[0][1]= -arr[0][1] * inverse_of_det;
    inverse[1][0]= -arr[1][0] * inverse_of_det;
    inverse[1][1]= arr[0][0] * inverse_of_det;

    display_arr(inverse);

}
void trans_arr_2_by_2(double arr[2][2], double transpose[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            transpose[j][i]= arr[i][j];
        }
    }
    display_arr(transpose);
}
double trace_arr2x2(double arr[2][2]){
   double trace = 0;
    for(int i=0;i<2;i++){
        trace+=arr[i][i];
    }
    return trace;
}
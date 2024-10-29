#include <iostream>
// implementation of the different functions and procedures
void display_arr3x3(double ar[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout << ar[i][j] << " " <<std::endl;
        }
        std::cout << std::endl;
    }
}
double det_arr_3_by_3(double ar[3][3]){
     
    return ar[0][0]*((ar[1][1]*ar[2][2])- (ar[1][2]*ar[2][1])) - ar[0][1]*((ar[1][0]*ar[2][2])- (ar[1][2]*ar[2][0])) + ar[0][2]*((ar[1][0]*ar[2][1])- (ar[1][1]*ar[2][0]));
}
void sum_3_by_3(double ar1[3][3],double ar2[3][3] )
{
    double add_ar[3][3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           add_ar[i][j] = (ar1[i][j] + ar2[i][j]);
        }
    }
    display_arr3x3(add_ar);

}
void sub_3_by_3(double ar1[3][3],double ar2[3][3])
{
    double sub_ar[3][3];
     for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           sub_ar[i][j] = (ar1[i][j]-ar2[i][j]);
        }
    }

    display_arr3x3(sub_ar);
}
void mult_3_by_3(double ar1[3][3],double ar2[3][3],double res[3][3])
{
     for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j] = 0;
            for(int t=0;t<3;t++){
                 res[i][j] +=(ar1[i][t] * ar2[t][j]);

            }
        }
    }
    display_arr3x3(res);
}

void fill_arr3x3(double ar[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout << "Element(" << i+1 << "," << j+1 << "):";
            std::cin >> ar[i][j];
        }
    }
}

void inv_arr_3_by_3(double ar[3][3], double inv[3][3]){
    double det = det_arr_3_by_3(ar);

    if(det==0){
        std::cout <<" The matrix is singular." <<std::endl;
    }
    double invDet = 1/det;
    inv[0][0] = (ar[1][1]*ar[2][2] - ar[1][2]*ar[2][1]) * invDet;
    inv[0][1] = -(ar[0][1]*ar[2][2] - ar[0][2]*ar[2][1]) * invDet;
    inv[0][2] = (ar[0][1]*ar[1][2] - ar[0][2]*ar[1][1]) * invDet;
    inv[1][0] = -(ar[1][0]*ar[2][2] - ar[1][2]*ar[2][0]) * invDet;
    inv[1][1] = (ar[0][0]*ar[2][2] - ar[0][2]*ar[2][0]) * invDet;
    inv[1][2] = -(ar[0][0]*ar[1][2] - ar[0][2]*ar[1][0]) * invDet;
    inv[2][0] = (ar[1][0]*ar[2][1] - ar[1][1]*ar[2][0]) * invDet;
    inv[2][1] = -(ar[0][0]*ar[2][1] - ar[0][1]*ar[2][0]) * invDet;
    display_arr3x3(inv);
}
void trans_arr3x3(double ar[3][3], double transp[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transp[j][i]= ar[i][j];
        }
    }
    display_arr3x3(transp);
}
double trace_arr3x3(double ar[3][3]){
    double traces = 0;
    for(int i=0;i<3;i++){
        traces += ar[i][i];
    }
    return traces;
}
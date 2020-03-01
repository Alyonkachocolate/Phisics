#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x;
    double arr[50], t[10],e[6],arr1[4],arr2[12];
    for(int i=0; i<10; i++){
        t[i]=0;
    }
    arr[0]=144;
    arr[1]=124;
    arr[2]=128;
    arr[3]=145;
    arr[4]=141;
    arr[5]=138;
    arr[6]=140;
    arr[7]=129;
    arr[8]=142;
    arr[9]=147;
    arr[10]=123;
    arr[11]=144;
    arr[12]=150;
    arr[13]=138;
    arr[14]=150;
    arr[15]=148;
    arr[16]=145;
    arr[17]=121;
    arr[18]=139;
    arr[19]=143;
    arr[20]=149;
    arr[21]=145;
    arr[22]=143;
    arr[23]=149;
    arr[24]=140;
    arr[25]=150;
    arr[26]=150;
    arr[27]=147;
    arr[28]=139;
    arr[29]=145;
    arr[30]=150;
    arr[31]=148;
    arr[32]=132;
    arr[33]=145;
    arr[34]=147;
    arr[35]=146;
    arr[36]=143;
    arr[37]=139;
    arr[38]=144;
    arr[39]=149;
    arr[40]=150;
    arr[41]=139;
    arr[42]=144;
    arr[43]=144;
    arr[44]=124;
    arr[45]=139;
    arr[46]=142;
    arr[47]=124;
    arr[48]=132;
    arr[49]=121;

    arr1[0]=131;
    arr1[1]=147;
    arr1[2]=143;
    arr1[3]=146;

    arr2[0]=137;
    arr2[1]=132;
    arr2[2]=151;
    arr2[3]=126;
    arr2[4]=115;
    arr2[5]=142;
    arr2[6]=145;
    arr2[7]=139;
    arr2[8]=131;
    arr2[9]=141;
    arr2[10]=152;
    arr2[11]=140;

    double sum=0, sr=0; double o=0, ox=0;
    cout<<"Маятник 1"<<endl;
    for(int i=0; i<50; i++){
        //cout<<arr[i]<<endl;
//        if (arr[i]>=120 && arr[i]<125) t[0]++;
//        if (arr[i]==125) t[1]++;
//        if (arr[i]>125 && arr[i]<130) t[2]++;
//        if (arr[i]==130) t[3]++;
//        if (arr[i]>130 && arr[i]<135) t[4]++;
//        if (arr[i]==135) t[5]++;
//        if (arr[i]>135 && arr[i]<140) t[6]++;
//        if (arr[i]==140) t[7]++;
//        if (arr[i]>140 && arr[i]<145) t[8]++;
//        if (arr[i]==145) t[9]++;
//        if (arr[i]>145 && arr[i]<=150) t[10]++;
        sum+=arr[i];
    }
//    for(int i=0; i<11; i++){
//        std::cout<<t[i]<<' ';
//    }
    cout<<endl;
    sr=sum/5000;

    //arr[0]=1.44;
     o=0, ox=0;
    for(int i=0; i<50; i++){
        arr[i]/=100;
        o+=(arr[i]-sr)*(arr[i]-sr);
        cout<<arr[i]<<' '<<arr[i]-sr<<' '<<(arr[i]-sr)*(arr[i]-sr)<<endl;
    }
    o/=49;
    o=sqrt(o);
    ox=o/sqrt(50);
    cout<<"o="<<o<<endl;
    cout<<"ox="<<ox<<endl;
    std::cout<<"sr="<<sum/5000<<std::endl;

    cout<<"Маятник 2"<<endl;
    sum=0;
    for(int i=0; i<5; i++){
        sum+=arr1[i];
    }

    sr=sum/400;

    o=0, ox=0;
    for(int i=0; i<4; i++){
        arr1[i]/=100;
        o+=(arr1[i]-sr)*(arr1[i]-sr);
        cout<<arr1[i]<<' '<<arr1[i]-sr<<' '<<(arr1[i]-sr)*(arr1[i]-sr)<<endl;
    }
    o/=3;
    o=sqrt(o);
    ox=o/sqrt(4);
    cout<<"o="<<o<<endl;
    cout<<"ox="<<ox<<endl;
    std::cout<<"sr="<<sum/400<<std::endl;
    cout<<endl;

    cout<<"Маятник 3"<<endl;
    sum=0;
    for(int i=0; i<12; i++){
        sum+=arr2[i];
    }

    sr=sum/1200;

    o=0, ox=0;
    for(int i=0; i<12; i++){
        arr2[i]/=100;
        o+=(arr2[i]-sr)*(arr2[i]-sr);
        cout<<arr2[i]<<' '<<arr2[i]-sr<<' '<<(arr2[i]-sr)*(arr2[i]-sr)<<endl;
    }
    o/=11;
    o=sqrt(o);
    ox=o/sqrt(12);
    cout<<"o="<<o<<endl;
    cout<<"ox="<<ox<<endl;
    std::cout<<"sr="<<sum/1200<<std::endl;
    cout<<endl;
}
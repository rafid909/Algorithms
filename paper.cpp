#include<bits/stdc++.h>

using namespace std;

int main()
{
    string price,features,quality;
    while(1){
    cout<<"Price=";
    cin>>price;
    cout<<"Features=";
    cin>>features;
    cout<<"Quality=";
    cin>>quality;
    if(price=="High" && features=="Low" && quality=="Low")
        cout<<"1.Purchase-Probability=Low";

    else if(price=="High" && features=="Medium" && quality=="Low")
        cout<<"2.Purchase-Probability=Low";
    else if(price=="High" && features=="Medium" && quality=="Medium")
        cout<<"3.Purchase-Probability=Medium";

    else if(price=="High" && features=="Medium" && quality=="High")
        cout<<"4.Purchase-Probability=Medium";

    else if(price=="Low" && features=="Medium" && quality=="Medium")
        cout<<"5.Purchase-Probability=High";

    else if(price=="Low" && features=="Low" && quality=="High")
        cout<<"6.Purchase-Probability=High";

    else if(price=="Low" && features=="High" && quality=="High")
        cout<<"7.Purchase-Probability=High";

    else if(price=="Low" && features=="Low" && quality=="Medium")
        cout<<"8.Purchase-Probability=Medium";

    else if(price=="Low" && features=="Low" && quality=="Low")
        cout<<"9.Purchase-Probability=Low";

    else if(price=="Low" && features=="High" && quality=="Medium")
        cout<<"10.Purchase-Probability=Medium";

    else if(price=="Low" && features=="High" && quality=="High")
        cout<<"11.Purchase-Probability=High";

    else if(price=="Low" && quality=="High" && features=="N/A")
        cout<<"12.Purchase-Probability=High";

    else if(price=="Low" && features=="High" && quality=="N/A")
        cout<<"13.Purchase-Probability=High";

    else if(price=="cheap" && features=="Medium" && quality=="N/A")
        cout<<"14.Purchase-Probability=High";

    else if(price=="cheap" && features=="High" && quality=="N/A")
        cout<<"15.Purchase-Probability=High";

    else if(price=="cheap" && quality=="High" && features=="N/A")
        cout<<"16.Purchase-Probability=High";

    else if(price=="cheap" && quality=="Medium" && features=="N/A")
        cout<<"17.Purchase-Probability=High";

    else if(price=="cheap" && features=="Low" && quality=="Low")
        cout<<"18.Purchase-Probability=Medium";

    else if(price=="High" && features=="High" && quality=="High")
        cout<<"19.Purchase-Probability=Medium";

    else if(price=="High" && quality=="Low" && features=="N/A")
        cout<<"20.Purchase-Probability=Low";

    else if(price=="High" && features=="Low" && quality=="N/A")
        cout<<"21.Purchase-Probability=Low";

    else if(price=="Medium" && features=="Medium" && quality=="High")
        cout<<"22.Purchase-Probability=High";

    else if(price=="High" && features=="High" && quality=="Low")
        cout<<"23.Purchase-Probability=High";

    else if(price=="High" && features=="Low" && quality=="Low")
        cout<<"24.Purchase-Probability=Low";

        cout<<"\n\n";
    }

}

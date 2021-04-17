#include <iostream>
#include <string>

using namespace std;

int main()
{
    //string flag = "RST{76ea621cafffa1930bd5c7276f803da5af9cd9a57bdffaf00f3858cb9703149c}";
    //string result = "";

    //for (size_t i = 0; i < flag.length(); i++)
    //{
    //    result += (flag[i] - i % 10);
    //}

    //cout << result;

    string flag = "RRRx31_Z.)1b_cba[*1*0ab2_2,0.]8/1a]0[_1Zd8_23]^_^Xf/.c/3/1[Y96.0-/3\\u";

    string result = "";

    for (size_t i = 0; i < flag.length(); i++)
    {
        result += (flag[i] + i % 10);
    }

    cout << "Where is the flag?" << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'processLogs' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY logs
 *  2. INTEGER maxSpan
 */

vector<string> processLogs(vector<string> logs, int maxSpan) 
{  int Id;
   vector<string>v;
   string s1,s2,s3;
   int sp1=0,sp2=0;
   map<string ,pair<pair<string,string>,int>>mp;
   for(auto a:logs)
   {
        for(int i=0;i<a.size();i++){
        if(isspace(a[i])){
            sp1=i;
            break;
        }
    }
    for(int i=0;i<a.size();i++){
        if(isspace(a[i])){
            sp2=i; 
        }
    }
    s1=a.substr(0,sp1-1);
    s2=a.substr(sp1+1,sp2-sp1+1);
    s3=a.substr(sp2+1,a.size());
    if(s3=="sign-in")
    {
        mp.insert(s1,{{s2,0},0});
    }else
    {      int m1 = stoi(mp[s1].second.first.second);
           int m2 = stoi(str2);
        mp.insert(s1,{{,s2},});
    }



   }
   for(auto a:mp)
   {
       if(a.second.second<maxSpan)
       {
         v.push_back(a.first);
       }
   }
    return v;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string logs_count_temp;
    getline(cin, logs_count_temp);

    int logs_count = stoi(ltrim(rtrim(logs_count_temp)));

    vector<string> logs(logs_count);

    for (int i = 0; i < logs_count; i++) {
        string logs_item;
        getline(cin, logs_item);

        logs[i] = logs_item;
    }

    string maxSpan_temp;
    getline(cin, maxSpan_temp);

    int maxSpan = stoi(ltrim(rtrim(maxSpan_temp)));

    vector<string> result = processLogs(logs, maxSpan);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'cutTheTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY data
 *  2. 2D_INTEGER_ARRAY edges
 */
int dfs(int* cumulative, bool* visited, vector<int>* edges, const vector<int>& data , const size_t& n, const int& current_node){
    cumulative[current_node]+=data[current_node];
    visited[current_node]=true;
    for(auto& c : edges[current_node]){
        if(!visited[c]){
            visited[c]=true;
            cumulative[current_node]+=dfs(cumulative,visited,edges,data,n,c);
        }
    }
    return cumulative[current_node];
}
    int cutTheTree(vector<int> data, vector<vector<int>> edges) {
    vector<int> candidates;
    vector<int>* adjancylist = new vector<int>[data.size()];
    int* cumulative=new int[data.size()]{};
    bool* visited=new bool[data.size()]{};

    for(auto& c : edges){
        adjancylist[c[0]-1].push_back(c[1]-1);
        adjancylist[c[1]-1].push_back(c[0]-1);
    }

    dfs(cumulative,visited,adjancylist,data,data.size(),0);
    const int v = cumulative[0]/2;
    for(int i=0;i<data.size();i++) visited[i]=false;

    queue<int> search;
    search.push(0);
    visited[0]=true;
    while(!search.empty()){
        int cur_node=search.front();
        search.pop();
        for(auto& next: adjancylist[cur_node]){
            if(!visited[next]){
                visited[next]=true;
                candidates.push_back(cumulative[0]-cumulative[next]);
                if(cumulative[0]-cumulative[next]<v)search.push(next);
            }
        }
    }
    
    for_each(candidates.begin(),candidates.end(),[&cumulative]( int& e){
        e=abs(cumulative[0]-2*e); 
        });
    delete[] adjancylist;
    delete[] visited;
    delete[] cumulative;

    // step 4: find the minimal difference
    return *(min_element(candidates.begin(),candidates.end()));
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string data_temp_temp;
    getline(cin, data_temp_temp);

    vector<string> data_temp = split(rtrim(data_temp_temp));

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        int data_item = stoi(data_temp[i]);

        data[i] = data_item;
    }

    vector<vector<int>> edges(n - 1);

    for (int i = 0; i < n - 1; i++) {
        edges[i].resize(2);

        string edges_row_temp_temp;
        getline(cin, edges_row_temp_temp);

        vector<string> edges_row_temp = split(rtrim(edges_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int edges_row_item = stoi(edges_row_temp[j]);

            edges[i][j] = edges_row_item;
        }
    }

    int result = cutTheTree(data, edges);

    fout << result << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

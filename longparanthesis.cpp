#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        stack<int> st;
        st.push(-1);
        int Max = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (!st.empty()) {
                    Max = max(Max, i - st.top());
                } else {
                    st.push(i);
                }
            }
        }
        cout << Max << endl;
    }
}

#include <bits/stdc++.h> 


string replaceSpaces(string &str) {
    int s = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.replace(i,1,"@40");
        }
    }
    return str;
}
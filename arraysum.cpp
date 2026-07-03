#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) { 
	int i=n-1;
	int j=m-1;
	int carry=0;
	int sum;
	vector <int>ans;


	while(i>=0&&j>=0)
	{
		int val1=a[i];
		int val2=b[j];
		 sum=val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		ans.insert(ans.begin(),sum);
		i--;
		j--;
	}

	while(i>=0)
	{
      sum=a[i]+carry;
	   carry=sum/10;
		sum=sum%10;

		ans.insert(ans.begin(),sum);
		i--;
	}

	while(j>=0)
	{
		sum=b[j]+carry;
	   carry=sum/10;
		sum=sum%10;
		ans.insert(ans.begin(),sum);
		j--;
	}

while(carry!=0)
{
	sum=carry;
	carry=sum/10;
		sum=sum%10;
		ans.insert(ans.begin(),sum);


}
return ans;

}
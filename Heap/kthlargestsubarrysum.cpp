#include<algorithm>
#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	// vector<int> sum;

	// for(int i=0;i<arr.size();i++)
	// {
	// 	 int addition=0;
	// 	 for(int j=i;j<arr.size();j++)
	// 	 {
	// 		  addition = addition+arr[j];
	// 		   sum.push_back(addition);


	// 	 }
	// }

	//   sort(sum.begin(),sum.end());

	//   return (sum[(sum.size())-k]);

	
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;

        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];

            if (pq.size() < k)
            {
                pq.push(sum);
            }
            else if (sum > pq.top())
            {
                pq.pop();
                pq.push(sum);
            }
        }
    }

    return pq.top();
}


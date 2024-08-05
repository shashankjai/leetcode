class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      vector<string> ans;
      int flag=0;
      for(int i=0;i<arr.size();i++){
        if(arr[i]=="A"){
            continue;
        }
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                flag++;
                arr[j]="A";
        }
        }
        if(flag==0){
            cout<<arr[i];
            ans.push_back(arr[i]);
        }
        flag=0;
        }
        if(ans.size()<k){
            
            return "";
        }

        return ans[k-1];
    

}
};
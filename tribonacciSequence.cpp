// code
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
  std::vector<int> result;
  if(n<4){
  for(int i = 0;i<n;i++){
    result.push_back(signature[i]);
  }
  }

  if(n>3){
  for(int i = 0;i<3;i++){
    result.push_back(signature[i]);
  }
  for(int i = 3; i<n;i++){
    result.push_back(result[i-1] + result[i-2] + result[i-3]);
    }
  }
  
    return result;
}

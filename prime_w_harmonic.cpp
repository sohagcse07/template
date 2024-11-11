const int mx = 1e7+12;

bool isPrime[mx];

vector<int> primes;

void PrimeGen(int n){

    for(int i=2; i<=n; i++) isPrime[i] = 1;


    for(int i=2; i<=n; i++){
        for(int j=i+i; j<=n; j+=i){
            isPrime[j] = 0;
        }
    }

    for(int i=2; i<=n; i++){
        if(isPrime[i]==1){
            primes.push_back(i);
        }
    }
}

/* lim = 20;
PrimeGen(lim);
for(auto u:primes){
    cout<<u<<endl;
}
*/

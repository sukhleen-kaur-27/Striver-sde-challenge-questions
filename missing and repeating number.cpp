// no main function created;

int xorr=0;
	for(int i=0;i<n;i++){
		xorr = xorr ^ arr[i];
		xorr = xorr ^ (i+1);
	}
	int bitNum = 0;
	while (true){
		if( (xorr & (1<<bitNum)) !=0){
			break;
		}
		bitNum++;
	}
	int one = 0;
	int zero = 0;
	for(int i=0;i<n;i++){
		if(arr[i] & (1<<bitNum) !=0){
			one = one ^ arr[i];
		}
		else{
			zero = zero ^ arr[i];
		}
		if((i+1) & (1<<bitNum) != 0){
			one = one ^ (i+1);
		}
		else{
			zero = zero ^ (i+1);
		}
	}
	int count = 0;
	for(int i=0; i<n; i++){
		if (arr[i]==zero) count++;
	}
	if (count==2) return {one, zero};
	return {zero, one};



	//O(N) time solution
	// S-Sn  
	// S2 - S2n
	// long long s = 0;
	// long long s2 = 0;
	// long long sn = n * (n+1)/2;
	// long long s2n = (n * (n+1) * (2*n +1))/6;
	
	// for(int i=0; i<n; i++){
	// 	s += arr[i];
	// 	s2 += (long long)arr[i] * (long long)arr[i];
	// }
	
	// long long val1 = s-sn; //x-y
	// long long val2 = s2-s2n;
	// val2 = val2/val1; //x+y

	// long long x = (val1+val2)/2;
	// long long y = x-val1;
	// return {(int)y, (int)x};




	// O(N^2) time taken

	// pair<int, int> p1 = {0,0};
	// for(int i=1; i<n+1; i++){
	// 	int countR=0, countM=0;
	// 	for(int j=0; j<n; j++){	
	// 		if (i==arr[j]){
	// 			countR++;
	// 			countM++;
	// 		}
	// 	}
	// 	if (countR==2){
	// 		p1.second = i;
	// 	}
	// 	if (countM==0){
	// 		p1.first = i;
	// 	}
	// }
	// return p1;
	

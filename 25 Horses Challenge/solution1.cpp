#include <iostream>

// Global-Vars
int totalRaces = 0;
int datasetArray [5][5];

/*
	Function Proto-types
*/
int generateDataset ();

// generate Dataset
int generateDataset (){
	
	int data = 1;
	for(int i=0; i<5; i++){
		
		int j = 0;
		while(j <= 4){
			
			datasetArray[i][j] = data;
			j++;
			data++;
		}
	}
	
	return 1;
}

// Display_Dataset
void displayDataset (){
	
	for(int i=0; i<5; i++){
		
		int j = 0;
		while(j <= 4){
			
			std::cout<<" "<<datasetArray[i][j];
			j++;
		}
		std::cout<<std::endl;
	}
}

// SOLUTION
int solution(){

	/* -temp array to process
	data */
	int tempArray = datasetArray[5][5];
	
}

/* Run-race of 5 
	args: 1 group of 5 */
int *runRace(int group[]){
	
	int temp;
	for(int i=1; i < 5; i++){
		
		int j = i-1;
		while(j < 4){
			
			if(group[i] < group[j]){
				
				temp = group[j];
				group[j] = group[i];
				group[i] = temp;	
			}
			j++;
		}
	}
	
	return group;
}

/*
	For dev-Environment
*/
void displayArray(int array[], int size){
	
	std::cout<<"-Begin-"<<std::endl;
	
	for(int i=0; i < size; i++){
		std::cout<<array[i]<<std::endl;
	}
	
	std::cout<<"-End-"<<std::endl;
	
	return;
}

int main(){

//	if(generateDataset()){
//		
//		displayDataset();
//	}

	int testArray[5] = {2,1,9,76,4};
	
	int *result = runRace(testArray);
	
	displayArray(result, 5);

return 0;
}

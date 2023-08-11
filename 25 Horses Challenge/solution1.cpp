#include <iostream>

// Global-Variables
int totalRaces = 0;
int datasetArray [5][5];

/*
	Function Proto-types
*/
int swap(int array[], int indexA, int indexB);

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
	
//	for(int i=0; i < 5; i++){
//		
//		int j = 0;
//		while(j < 5){
//			
//			if(group[j+1] < group[j]){
//				swap(group, j, j+1);
//			}
//			
//			j++;
//		}
//	}
	
	return group;
}

/* swap two elements (int) 
 args: targetArray, index-a, index-b*/

int *swap(int array[], int indexA, int indexB){
	
//	int temp = array[indexA];
//	array[indexA] = array[indexB];
//	array[indexB] = temp;
	
	return array;
}
 


/*
	For dev-Environment
*/
void displayArray(int array[], int size){
	
	std::cout<<"-Begin-"<<std::endl;
	
	for(int i=0; i < size; i++){
		std::cout<<array[i];
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
	
	int *result = swap(testArray, 1, 0);
	
	displayArray(result, 5);

return 0;
}

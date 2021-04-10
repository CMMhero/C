#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct MinHeap{ 
	int *hArr; 
	int capacity; 
	int heapSize; 
} MinHeap;

MinHeap createHeap(int cap) { // Function untuk membuat heap baru 
	MinHeap newHeap;
	newHeap.heapSize = 0; 
	newHeap.capacity = cap; 
	newHeap.hArr = malloc(sizeof(int) * cap); 
	
	int i; 
	for (i=0; i<cap; i++) {
		newHeap.hArr[i] = 0; 	
	}
	
	return newHeap;
}

int parent(int i){ // Function untuk mencari index parent 
	return (i-1)/2; 
}

int left(int i){ // Function untuk mencari index anak kiri 
	return (2*i + 1); 
}

int right(int i){ // Function untuk mencari index anak kanan 
	return (2*i + 2); 
}

// Function untuk menukar 2 buah angka 
void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp; 
}

// Function untuk memasukkan angka baru ke heap 
void insertKey(MinHeap *mHeap, int k) { 
	printf("Current Heap Size = %d\n\n", mHeap->heapSize); 
	printf("lnserting %d to heap\n", k);
	if(mHeap->heapSize == mHeap->capacity) {
		printf("\noverflow: Could not insertKey\n"); 
		return; 		
	}

	// Pertama-tama, masukkan angka ke dalam index terakhir 
	mHeap->heapSize++;
	int i = mHeap->heapSize - 1;
	mHeap->hArr[i] = k;
	 
	// Memperbaiki properti dari min heap 
	// Jika angka baru yang masuk tidak memenuhi kriteria min heap 
	while (i != 0 && mHeap->hArr[parent(i)] > mHeap->hArr[i]) { 
		swap(&mHeap->hArr[i], &mHeap->hArr[parent(i)]);
		i = parent(i);
	}
}

void MinHeapify(MinHeap *mHeap, int i) {
	int l = left(i); 
	int r = right(i); 
	int smallest = i; 
	if (l < mHeap->heapSize && mHeap->hArr[l] < mHeap->hArr[i]) smallest = l;
	if (r < mHeap->heapSize && mHeap->hArr[r] < mHeap->hArr[smallest]) smallest =r; 
	if (smallest != i) { 
		swap(&mHeap->hArr[i], &mHeap->hArr[smallest]); 
		MinHeapify (mHeap, smallest);
	}
}

int extractMin(MinHeap *mHeap) { 
	if(mHeap->heapSize <= 0) return INT_MAX; 
	if(mHeap->heapSize == 1) { 
		mHeap->heapSize--; 
		return mHeap->hArr[0];
	}
	
	// Simpan nilai minimumnya dan hapus dari heap 
	int root = mHeap->hArr[0];
	mHeap->hArr[0] = mHeap->hArr[mHeap->heapSize-1];
	mHeap->heapSize--; 
	MinHeapify(mHeap, 0); 
	
	return root; 
}

int getMin(MinHeap *mHeap) { 
	return mHeap->hArr[0];
}

void printHeap(MinHeap mHeap) {
	int i;
	printf("Current heap : "); 
	for(i=0; i<mHeap.heapSize; i++) { 
		printf("%d ", mHeap.hArr[i]); 
	}
	printf( "\n"); 
}

// mengurangi nilai pada index i menjadi newVa1ue dengan asumsi 
// nilai newValue lebih kecil dari hArr[i] 
void decreaseKey(MinHeap *mHeap, int i, int newValue) 
{
	mHeap->hArr[i] = newValue; 
	while (i != 0 && mHeap->hArr[parent(i)] > mHeap->hArr[i])
	{
		swap(&mHeap->hArr[i], &mHeap->hArr[parent(i)]); 
		i = parent(i); 
	}
}

// Pertama-tama dengan menguangi nilainya menjadi negatif tak terhingga 
// Agar menjadi paling kecil 
// Lalu memanggil extractMin() untuk menghapusnya 
void deleteKey(MinHeap *mHeap, int i){ 
	printf("Current Heap Size = %d\n\n", mHeap->heapSize); 
	printf("Deleting index %d from heap\n", i);
	decreaseKey(mHeap, i, INT_MIN); 
	extractMin(mHeap);
}

int main() { 
	MinHeap mHeap; 
	
	mHeap = createHeap(11); 
	
	printHeap(mHeap);
	insertKey(&mHeap, 3);
	printHeap(mHeap);
	insertKey(&mHeap, 2);
	printHeap(mHeap);
	insertKey(&mHeap, 1);
	printHeap(mHeap);
	insertKey(&mHeap, 15);
	printHeap(mHeap);
	insertKey(&mHeap, 5);
	printHeap(mHeap);
	insertKey(&mHeap, 4);
	printHeap(mHeap);
	insertKey(&mHeap, 45);
	printHeap(mHeap);
	printf("Min Value in Heap: %d \n", getMin(&mHeap));
	 
	extractMin(&mHeap); 
	printHeap(mHeap);
	
	deleteKey(&mHeap, 1);
	printHeap(mHeap);
	
	return 0; 
}


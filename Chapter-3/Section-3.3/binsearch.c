#include <stdio.h>
#include <time.h>

#define VLENGTH 9

int binsearchalt (int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n-1;
    while (low <= high) {
        mid = (low + high) /2;
        if (x < v[mid]) {
            high = mid - 1;
        }else if (x > v[mid]) {
            low = mid + 1;
        }else {
            return mid;
        }
    }
    return -1;
}

/* binsearch: find x in v[O] <= v[1] <= ••• <= v[n-1] */
int binsearch (int x, int v[], int n) {

    int x_index = -1;

    //search through [low,high]
    int low = 0;
    int high = n -1;
    int mid;

    while (low <= high) {
        // find the midpoint
        mid = (low + high) / 2;
        printf ("New mid: %d\n", mid);

        if (x > v[mid]) {
            low = mid + 1 ;
        }else {
            high = mid - 1;
        }

        printf("New low: %d\n", low);
        printf("New high: %d\n", high);

    }

    if (v[low] == x) {
        x_index = low;
    }else if (v[high] == x) {
        x_index = high;
    }

    return x_index;
}

int main() {

    int x = 3;

    int v_list[VLENGTH] = {2, 3, 4, 5, 9, 10, 20, 40, 30};

    // Calculate the time taken by fun() 
    clock_t t; 
    t = clock(); 
    int x_index = binsearch(x, v_list, VLENGTH);    
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("fun() took %f seconds to execute \n", time_taken); 

    if (x_index == -1) {
        printf("Did not find index \n");
    }else {
        printf("Found index: %d \n", x_index);
    }

}


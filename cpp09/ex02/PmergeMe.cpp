#include <vector>
#include <deque>

void insertion_sort(std::vector<int> &vec, int begin, int end)
{
	int j, key;
	for (int i = begin + 1 ; i <= end; i++)
	{
		key = vec[i];
		j = i - 1;
		while (j >= begin && (vec[j] > key))
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void merge(std::vector<int> &vec, int const l, int m, int const r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];
  
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int> &vec, int l, int r, int limit)
{
    if (l < r)
    {
        if ((r - l) <= limit)
            insertion_sort(vec, l, r);
        else
        {
            int m = (l + r) / 2;
            mergeSort(vec, l, m, limit);
            mergeSort(vec, m + 1, r, limit);
            merge(vec, l, m, r);
        }
    }
}

void insertion_sort(std::deque<int> &vec, int begin, int end)
{
	int j, key;
	for (int i = begin + 1 ; i <= end; i++)
	{
		key = vec[i];
		j = i - 1;
		while (j >= begin && (vec[j] > key))
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void merge(std::deque<int> &vec, int const l, int m, int const r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];
  
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::deque<int> &vec, int l, int r, int limit)
{
    if (l < r)
    {
        if ((r - l) <= limit)
            insertion_sort(vec, l, r);
        else
        {
            int m = (l + r) / 2;
            mergeSort(vec, l, m, limit);
            mergeSort(vec, m + 1, r, limit);
            merge(vec, l, m, r);
        }
    }
}
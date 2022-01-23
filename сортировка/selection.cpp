#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = 5 + rand() % (20 - 5 + 1);
        cout << arr[i] << " ";
    }
    cout << endl;

   for (int startIndex = 0; startIndex < n - 1; ++startIndex)
	{
		// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
		// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
		int smallestIndex = startIndex;
 
		// Затем ищем элемент поменьше в остальной части массива
		for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
		{
			// Если мы нашли элемент, который меньше нашего наименьшего элемента,
			if (arr[currentIndex] < arr[smallestIndex])
				// то запоминаем его
				smallestIndex = currentIndex;
		}
 
		// smallestIndex теперь наименьший элемент. 
        // Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
		//std::swap(arr[startIndex], arr[smallestIndex]);
        int temp = arr[startIndex];
        arr[startIndex] = arr[smallestIndex];
        arr[smallestIndex] = temp;

	}
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
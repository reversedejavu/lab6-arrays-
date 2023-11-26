// Задание 5. Найти наибольший/наименьший элемент массива и его номер по порядку

//#include <iostream>
//using namespace std;
//int main() {
//	int array[10] = { 1,5,0,-1,2,4,5,15,-13,76};
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << " ";
//	}
//	cout << endl;
//
//	int min = array[0];
//	for (int i = 1; i < 10; i++) {
//		if (min > array[i]) {
//			min = array[i];
//			cout << "new min " << min;
//			cout << endl;
//		}
//	}
//	cout << min;
//
//	cout << endl;
//
//	// * Для максимального
//	int max = array[0];
//	for (int i = 1; i < 10; i++) {
//		if (max < array[i]) {
//			max = array[i];
//			cout << "new max " << max;
//			cout << endl;
//		}
//	}
//	cout << max;
//}



// Задание 1. Сгенерировать массив со случайными числами в диапазоне h. [0,100]
//#include <iostream>
//#include <stdlib.h>
//int main() {
//	const int n = 100;
//	int arrA[n];
//	int arrB[n];
//	srand(2); 
//	for (int i = 0; i < n; i++) {
//		arrA[i] = rand() % 1;
//		arrB[i] = rand() % 101;
//	}
//	for (int i = 0; i < n; i++)
//		std::cout << arrA[i] << " " << arrB[i] << std::endl;
//	std::cin.get();
//	std::cin.get();
//	return 0;
//}

// Задание 2(с) Вычислить сумму элементов массива : меньших 5, больших 6, меньших 4 на языке c++
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[] = { 3, 7, 1, 9, 2, 8, 4, 6, 5 };
//	int n = sizeof(arr) / sizeof(arr[0]); // вычислить размер массива
//	int sum_less_5 = 0; // сумма элементов, меньших 5
//	int sum_greater_6 = 0; // сумма элементов, больших 6
//	int sum_less_4 = 0; // сумма элементов, меньших 4
//	for (int i = 0; i < n; i++) {
//		if (arr[i] < 5) { // если текущий элемент меньше 5
//			sum_less_5 += arr[i]; // добавляем его к сумме элементов, меньших 5
//		}
//		if (arr[i] > 6) {
//			sum_greater_6 += arr[i];
//		}
//		if (arr[i] < 4) {
//			sum_less_4 += arr[i];
//		}
//	}
//	cout << "Sum of elements less than 5: " << sum_less_5 << endl; // Сумма элементов, меньших 5
//	cout << "Sum of elements greater than 6: " << sum_greater_6 << endl; // Сумма элементов, больших 6 
//	cout << "sum of elements less than 4: " << sum_less_4 << endl; // Сумма элементов, меньших 4
//
//	return 0;
//}

// Задание 9. Посчитать количество элементов массива, больших нуля
//#include<iostream>
//
//int main() {
//    using namespace std;
//    int arr[] = { 3, -2, 1, 0, 5, -1, 4, 0, 2 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int count = 0; // кол-во элем. массива > 0 
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > 0) {
//            count++;
//        }
//    }
//    cout << "Number of elements greater than zero: " << count << endl; // Количество элементов, больших нуля
//
//    return 0;
//}

// Задача 6. Найти номер минимального / максимального по модулю элемента
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int arr[] = { 3, -2, 1, 0, 5, -1, 4, 0, 2 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int min_abs_index = 0; // индекс min по модулю элемента
//    int max_abs_index = 0; // индекс max по модулю элемента
//
//    for (int i = 1; i < n; i++) {
//        if (abs(arr[i]) < abs(arr[min_abs_index])) { // если текущий элемент меньше минимального по модулю
//            min_abs_index = i; // то обновляем индекс mix по модулю элемента
//        }
//        if (abs(arr[i]) > abs(arr[max_abs_index])) {
//            max_abs_index = i;
//        }
//    }
//    cout << "Index of the minimum module element: " << min_abs_index << endl; // Индекс минимального по модулю элемента
//    cout << "Index of the maximum module element: " << max_abs_index << endl; // Индекс максимального по модулю элемента
//
//    return 0;
//}

// Задание 14. Создать новый массив из двух других массивов путём операций над элементами массивов: b) вычитания
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> arr1 = { 1, 2, 3, 4 };
//    vector<int> arr2 = { 5, 6, 7, 8 };
//
//    vector<int> new_arr;
//
//    for (int i = 0; i < arr1.size(); i++) {
//        new_arr.push_back(arr1[i] - arr2[i]);
//    }
//
//    for (int i = 0; i < new_arr.size(); i++) {
//        cout << new_arr[i] << " ";
//    }
//
//    return 0;
//}

	

// Задание 20. Имеется информация об N членах спортивной секции : фамилия, возраст, рост.
//Ввести информацию о каждом. a) Напечатать фамилию самого высокого.
//#include<iostream>
//#include<array>
//using namespace std;
//
//struct member {
//	string surname;
//	int age;
//	int height;
//};
//
//int main() {
//	const int n = 5;
//	array<member, n> members;
//
//	for (int i = 0; i < n; i++) {
//		cout << "Enter information for member #" << i + 1 << endl; // ввод информации для участника
//		cout << "Surname: ";
//		cin >> members[i].surname;
//		cout << "Age: ";
//		cin >> members[i].age;
//		cout << "Height: ";
//		cin >> members[i].height;
//	}
//
//	int max_height = 0;
//	string max_surname;
//
//	for (int i = 0; i < n; i++) {
//		if (members[i].height > max_height) {
//			max_height = members[i].height;
//			max_surname = members[i].surname;
//		}
//	}
//
//	cout << "The surname of the tallest member is: " << max_surname << endl; // фамилия самого высокого 
//
//	return 0;
//}
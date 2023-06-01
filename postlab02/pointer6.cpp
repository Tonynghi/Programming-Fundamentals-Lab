/*
Cho một mảng động hai chiều matrix có kích thước r x c. Hiện thực hàm bool deleteCol(int** matrix, int r, int c, int col) tiến hành xóa cột thứ col của matrix.

Đầu vào: Mảng 2 chiều matrix có kích thước r x c và vị trí cột cần xóa col.

Đầu ra: Mảng 2 chiều matrix sau khi xóa cột.

Lưu ý: Nếu mảng hai chiều xóa đi cột cuối cùng, kết quả trả về là nullptr và đồng thời giải phóng toán bộ vùng nhớ của mảng hai chiều được cấp phát trước đó.

English version:

Given a dynamic two-dimensional array of size r x c. Implement the function bool deleteCol(int**& matrix, int r, int c, int col) that can remove a column from the matrix.

Input: The two-dimensional matrix of size r x c and the remove position col.

Output: The two-dimensional matrix after removing the column.

Note: If the final column of the matrix is removed, the function will return nullptr value as well as deallocate the memory previously used by the matrix.




For example:

Test	Input	Result
1       2 3     1 2
        1 2 3   4 5
        4 5 6
        2
*/
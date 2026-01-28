1. Tìm độ dài chuỗi
```c
size_t strlen(const char* string);

2. Sao chép chuỗi

char* strcpy(char* copyString, const char* stringCopy);

3. Ghép nối 2 chuỗi

char* strcat(char* string1, const char* string2);
(chỉ mỗi string1 thay đổi, string 2 giữ nguyên)

4. So sánh độ dài 2 chuỗi
int strcmp(const char* string1, const char* string2);

5. Tìm kiếm 1 kí tự
char* strchr(const char* string, int characterSearch);
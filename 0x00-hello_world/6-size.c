#!/bin/bash
int main() { return printf("Size of char: %zu byte(s)\nSize of int: %zu byte(s)\nSize of long int: %zu byte(s)\nSize of long long int: %zu byte(s)\nSize of float: %zu byte(s)\nSize of double: %zu byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float), sizeof(double)) == -1 ? 1 : 0; }

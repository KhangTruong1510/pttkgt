#pragma once
#include"Product.h"
#include"Cart.h"
#include"Customer.h"
#include"Bill.h"
#include<vector>
#include<fstream>
#include<iomanip>
#include<cwchar>
#include <algorithm>
#include<Windows.h>

bool check(const vector <Product>& l, const Product& p);	//Ki?m tra tr?ng l?p m? s?n ph?m

bool readFile(vector <Product>& l);

void countSort(vector<int>& arr);

void setFont(const int& y, const string& front);	//Set font for console

bool displayProduct(const vector <Product>& l);

int FindProduct(string X, string Y);

bool addCart(vector <Cart>& t, const vector <Product>& l, const string& proCode, const int& quantity);

void addCartMenu(vector <Cart>& t, const vector <Product>& l);

bool deleteCartItem(vector<Cart>& c, const vector<Product>& l);

bool editCartItem(vector<Cart>& c, const vector<Product>& l);

bool editCartItem(vector<Cart>& c, const vector<Product>& l);

bool displayCart(vector<Cart> c);

bool addBill(vector <Cart>& t, vector <Cart>& l, const string& proCode);

bool addBill_(vector <Cart>& t, vector <Cart>& l, const string& proCode);

void addBillMenu(vector<Bill>& b, vector <Cart>& t, size_t size);

bool displayBill(vector<Bill> b, Customer c);

void inputCustomer(Customer& P);

void output(vector<Product>p);

void mainMenu(vector<Bill>& b, vector <Cart>& c, vector <Product>& l, Customer cus);
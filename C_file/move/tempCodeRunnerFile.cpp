IntNum(const IntNum & n) : xptr(new int(*n.xptr)) {//复制构造函数
	// 	cout << "深拷贝构造..." << endl;
	// }
#include<iostream>

//��ȿ ����
//�ϳ��� ��ȯ ���� ������ �ش� ������ ���� �� �ִ� ������ ��Ÿ��
//�Լ� ������ ����� ������ �Լ� �������� ��밡��
//�Լ� �ۿ��� ����� ������ ������ ����� ���Ŀ� ������ ��� �Լ����� ��밡��

//����
//�ش� ������ ����� �� �ִ� ������ ���� ���� ����
//�ܺ� ������ ������ ������ ���� ���Ͽ��� ��� ����
//���� ������ ������ ������ �ϳ��� ���Ͽ����� ��� ����

//C++������ ����
//1.�ڵ� ����
//2.�������� ����
//3.���� ����

//1.��������
//�ڵ� ������ ���ϳ����� ����� ������ �ǹ��ϸ�, �Լ��� �Ű������� ���⿡ ����
//�ڵ� ������ ����� ���� �������� ��ȿ�ϸ�, ������ ����Ǹ� �޸𸮵� �������.
//�ڵ� ������ �޸𸮻��� ���ÿ����� ����Ǹ�, �ʱ�ȭ���� ������ �ǹ� ���� ������ �ʱ�ȭ�ȴ�.

//2.��������
//���� ������ ���α׷��� ����Ǵ� ���� �����Ǵ� ����
//���� ������ �޸𸮻��� �����Ϳ����� ����Ǹ�,�ʱ�ȭ���� ������ 0���� �ڵ� �ʱ�ȭ

//1.������ ������ �ʴ� ���� ����
//static Ű���带 ����Ͽ� ����
//���� ������ ���� ������ Ư¡�� ��� ����
//���� ����ó�� �� �ѹ��� �ʱ�ȭ�Ǹ�, ���α׷��� ����Ǿ�� �޸𸮻󿡼� �����

//2.���� ������ ������ ���� ����
//static Ű���帣 ����Ͽ� ����
//���� ���Ͽ����� ����� �� �ִ�.

//3.�ܺ� ������ ������ ���� ����
//�ܺ� ������ ������ ���� ������ �ܺ� ������ �Ѵ�.
//�ܺ� ������ �ش� ������ ����ϴ� ��� ���Ͽ��� ���� extren Ű���带 ����Ͽ� �缱��


using namespace std; //2.���� ������ ������ ���� ����

static int a;
int var = 10;
void StaticVar(void);

int main() {

	
	int var = 5;
	cout << "main() �Լ��ȿ� ���� var�� ����: " << var << endl;
	if (1) {
		int var = 10;
		cout << "if�� ���� ���� var�� ����: " << var << endl;
	}
	for (int i = 0; i < 3; i++) {
		StaticVar();
	}


	return 0;
}

void StaticVar(void) {
	static int i = 1; //1.������ ������ �ʴ� ���� ����
	cout << "StaticVar()�Լ� i�� ��: " << i << endl;
	i++;
}
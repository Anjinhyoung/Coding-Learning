#include<stdio.h>
#include<string.h>
void main() {
	char title[20] = "��DS Cafe��";
	char menu[100] = "���߰��ϱ�\n������ϱ�\n��˻��ϱ�\n������ϱ�\n���Ϻ���\n�쳪����";
	//�޴� �̸�, �޴� ����
	char arName[200][100] = { "", };
	char temp[100] = "";
	int arPrice[200] = { 0, };
	int choice = 0;
	int cnt = 0;
	int isDup = 0;

	while (1) {
		printf("%s\n%s\n", title, menu);
		scanf_s("%d", &choice);
		if (choice == 6) { break; }

		switch (choice) {
		case 1://�߰��ϱ�
			printf("�޴� �̸� : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					break;
				}
			}
			
			if (!isDup) {
				printf("�޴� ���� : ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(arName[cnt]), temp);
				cnt++;
			}
			else {
				printf("�̹� �����ϴ� ��ǰ�Դϴ�.");
			}
			break;
		case 2://�����ϱ�
			break;
		case 3://�˻��ϱ�
			break;
		case 4://�����ϱ�
			break;
		case 5://��Ϻ���
			break;
		}

	}

}
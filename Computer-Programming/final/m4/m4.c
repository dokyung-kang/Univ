#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 20
#define MAX_CUST 20 // max customer
#define MAX_CHAR 100 // 문자열의 max 문자
#include <stdio.h>
#include <string.h>

typedef struct {
	char title[MAX_CHAR];
	int qty; // 수량
} VideoInfo;

typedef struct {
	int custId;
	char title[MAX_CHAR]; // Video 제목
} RentInfo;

void printAllVideo(VideoInfo videoList[], int videoCount) // 변경하지 말라
{
	int i;

	//printf("Video제목\t 수량\n");
	//printf("-----------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s %d\n", videoList[i].title, videoList[i].qty);
}

int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title) // 변경하지 말라
{
	int i;
	for (i = 0; i < videoCount; i++)
		if (!strcmp(videoList[i].title, title))
			return i;
	return -1;
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title, int qty) // 코드 작성
{
	int idx = searchVideoByTitle(videoList, *videoCountPtr, title);
	if (idx != -1) {
		videoList[idx].qty += qty;
	}
	else {
		strcpy(videoList[*videoCountPtr].title, title);
		videoList[(*videoCountPtr)++].qty = qty;
	}
}

void rentVideo(VideoInfo* videoList, int videoCount, RentInfo* rentList, int* rentCount, char* title, int custId) // 변경하지 말라
{
	int indexSearched = searchVideoByTitle(videoList, videoCount, title);

	strcpy(rentList[*rentCount].title, title);
	rentList[*rentCount].custId = custId;
	(*rentCount)++;
	videoList[indexSearched].qty--;
}

void printAllRent(RentInfo* rentList, int rentCount) // 변경하지 말라
{
	int i;

	//printf("고객id\tVideo제목\n");
	//printf("-----------------------\n");
	for (i = 0; i < rentCount; i++)
		printf("%d %s\n", rentList[i].custId, rentList[i].title);
}//구현

int main(void) // 변경하지 말라
{
	int videoCount = 5;
	VideoInfo videoList[MAX_VIDEO] =  // 비디오장부
	{ {"aaa", 1}, {"bbb", 3},
		{"ccc", 5}, {"ddd", 7}, {"eee", 9} };
	int rentCount = 0;
	RentInfo rentList[MAX_CUST]; // 대여장부

	int choice;
	int indexSearched;
	char title[MAX_CHAR];
	int custId, qty;

	//printf("1(비디오장부출력), 2(구입), 3(검색), 4(대여), 5(All 대여장부출력), 6(반납), 7(종료): ");
	scanf("%d", &choice);
	while (choice != 7) {
		switch (choice) {
		case 1: printAllVideo(videoList, videoCount); break;
		case 2: // 기존 것을 추가 구입 할 수있다고 가정
			//printf("Enter video 제목: ");
			scanf("%s", title);
			//printf("Enter video 수량: ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty); break;
		case 3:
			//printf("Enter video 제목: ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(videoList, videoCount, title)) == -1)
				printf("그런 비디오는 없습니다.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("다 대여중입니다.\n");
			else
				printf("대여 가능합니다.\n"); break;
		case 4:
			//printf("Enter video 제목: ");
			scanf("%s", title);
			//printf("Enter 고객 id: ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId); break;
		case 5:
			printAllRent(rentList, rentCount); break;
		case 6: // 추가: 반납
			//printf("Enter video 제목: ");
			scanf("%s", title);
			//printf("Enter 고객 id: ");
			scanf("%d", &custId);
			//returnVideo(videoList, videoCount, rentList, &rentCount, title, custId); break; // 다음 문제에서 주석 취소
		}
		//printf("1(비디오장부출력), 2(구입), 3(검색), 4(대여), 5(대여장부출력), 6(반납), 7(종료): ");
		scanf("%d", &choice);
	}
}
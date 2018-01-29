/*
��蕶
��M�V���́A���̎M�ɏ���Ă��邨����̏d���̍��v�� L �Ƃ��A�E�̎M�ɏ���Ă��邨����̏d���̍��v�� R �Ƃ����Ƃ��A L>R �Ȃ獶�ɌX���AL=R �Ȃ�ނ荇���AL<R �Ȃ�E�ɌX���܂��B
�����N�́A��M�V���̍��̎M�ɏd�� A �̂�����Əd�� B �̂�������A�E�̎M�ɏd�� C �̂�����Əd�� D �̂������u���܂����B
��M�V�������ɌX���Ȃ� Left ���A�ނ荇���Ȃ� Balanced ���A�E�ɌX���Ȃ� Right ���o�͂��Ă��������B
*/

#include<iostream>
#include<array>

int main() {
	int l, r;
	std::array<int, 4> ar;

	for (auto&& x : ar) {
		std::cin >> x;
	}

	for (int i = 0; i < 2; i++) {
		l += ar[i];
		r += ar[2 + i];
	}
	
	std::cout << (l > r ? "Left" : l < r ? "Right" : "Balanced") << std::endl;

	return 0;
}
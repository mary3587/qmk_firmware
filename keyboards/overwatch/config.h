#pragma once
/* Copyright HarshitGoel96 2020
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


// USB 디바이스 정보
#define VENDOR_ID       0xFEED  // 제공된 값: 0xFEED
#define PRODUCT_ID      0x0000  // 제공된 값: 0x0000
#define DEVICE_VER      0x0001  // 디바이스 버전 (1.0.0에 맞는 버전으로 설정)
#define MANUFACTURER    "Mary"  // 제공된 값: "Mary"
#define PRODUCT         "overwatch" // 제공된 값: "overwatch_keyboard"

// 부트로더 설정 (Pro Micro는 기본적으로 "caterina" 부트로더 사용)
#define BOOTLOADER      caterina

// 매트릭스 크기 (행과 열의 수)
#define MATRIX_COLS 6
#define MATRIX_ROWS 4

// 키 매트릭스 핀 설정
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }
#define MATRIX_ROW_PINS { D3, D2, D1, B2 }   // 제공된 값
   // 제공된 값
#define DIODE_DIRECTION COL2ROW  // 제공된 값: COL2ROW



// 디버그 메시지 활성화 (선택 사항)
#define DEBUG  // 디버그 메시지 활성화

// 키 입력 타이밍 설정
#define TAPPING_TERM 200  // 탭 입력이 필요한 시간 (ms)
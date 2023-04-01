# SSD_PJT

### 목적

<p> SSD를 검증할 수 있는 Test Shell 개발 </p>
    

### 개발 단계

    
#### 1. 가상 SSD 제작

- <p>Read, Write 명령어가 존재한다.</p>

- <p>LBA 단위는 4Byte</p>

- <p>LBA 0~99번 까지 100칸을 저장한다. 총 400Byte 저장가능하다.</p>

#### 2. Test Shell Application

- write
    
    `write 3 0xAAAABBBB` 3번 LBA에 0xAAAABBBB 기록
    
- read
    
    `read 3` 3번 LBA를 읽는다
    
    → result.txt에 적힌 결과를 화면에 출력
    
- exit
    
    `exit` → shell 종료
    
- help
    
    `help` 각 명령어마다 사용 방법 출력
    
- fullwrite
    
    LBA 0~99번 까지 write 수행
    
    → ssd에 전체 값이 수행
    
    `fullwrite 0xABCDEFFF` → nand.txt에 저장
    
- fullread
    
    모든 LBA의 값이 화면에 출력 → 저장 x
    
- 없는 명령어 입력시
    
    → INVALID COMMAND 출력
    
- 입력 받는 매개변수 유효성 검사

    - 파라미터의 Format이 정확해야 함
    
    - LBA의 범위 0~99
    
    - <p>A~F, 0~9까지 숫자 범위 허용</p>

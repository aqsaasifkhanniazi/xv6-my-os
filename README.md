# xv6-my-os - Custom OS by Aqsa Asif Khan Niazi
## OS Module Architecture - 10 Modules Integrated
```mermaid
flowchart TD
    A[Module 1: Custom Banner] --> B[Module 2: proccount]
    B --> C[Module 3: hello getppid proccount]
    C --> D[Module 4: meminfo]
    D --> E[Module 5: diskinfo]
    E --> F[Module 6: rdcycle]
    F --> G[Module 7: rdinstret]
    G --> H[Module 8: CUSTOM rdtime]
    H --> I[Module 9: SATP Reader]
    I --> J[Module 10: Stack Inspector]
    J --> K[FINAL: All 10 Integrated]

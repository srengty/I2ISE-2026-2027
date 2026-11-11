# Lab-02 · Classification of five applications

Version 1.0 · 2026-__-__ · Team: __

| # | Application             | Kind                 | Type(s) | Where the code runs, how it is delivered | Architecture | Top 3 qualities (why) | Filled by |
| - | ----------------------- | -------------------- | ------- | ---------------------------------------- | ------------ | --------------------- | --------- |
| 1 | Mobile banking app: FTB | Application software | PWA     | mobile,..                                |              |                       |           |
| 2 | Telegram                | Application software |         |                                          |              |                       |           |
| 3 | ABS controller in a car |                      |         |                                          |              |                       |           |
| 4 | Moodle at ITC           |                      |         |                                          |              |                       |           |
| 5 | Game: __                |                      |         |                                          |              |                       |           |

Biggest difference we found: __

```mermaid
quadrantChart
  title Five applications: timing vs availability
  x-axis Low timing demand --> High timing demand
  y-axis Low availability demand --> High availability demand
  quadrant-1 Critical and fast
  quadrant-2 Always on
  quadrant-3 Best effort
  quadrant-4 Fast but tolerant
  Telegram: [0.70, 0.80]
  GICITC: [0.3, 0.3]
  %% TODO: move Telegram, then add the other four (values 0 to 1)
```

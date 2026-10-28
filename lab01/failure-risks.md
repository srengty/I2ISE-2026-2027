F2 | Two developers implement "capacity" differently (seats vs.
   | registrations) and the rules drift apart
   | topic: essential difficulties (invisibility)
   | warning: the same rule appears in two places in the code
   | countermeasure: one function per business rule + a unit test;
   |   rules listed in the README | owner: Heng Vanna
F4 | Student e-mails and phone numbers leak through a CSV file
   |   pushed to a public repository
   | topic: reliability, security and safety
   | warning: real data files appear in `git status`
   | countermeasure: only invented test data in the repo; data/
   |   in .gitignore | owner: Sok Sokha
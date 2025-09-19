// // PDF Data
// const pdfData = {
//   "ADA": [
//     {name: "ADA-M1", file: "ADA/ADA-M1.pdf", type: "Module"},
//     {name: "ADA-M2", file: "ADA/ADA-M2.pdf", type: "Module"},
//     {name: "ADA-M3", file: "ADA/ADA-M3.pdf", type: "Module"},
//     {name: "ADA-M4", file: "ADA/ADA-M4.pdf", type: "Module"},
//     {name: "ADA-M5", file: "ADA/ADA-M5.pdf", type: "Module"},
//     {name: "ADA-M5A", file: "ADA/ADA-M5A.pdf", type: "Module"},
//     {name: "ADA-PYQ1", file: "ADA/ADA-PYQ1.pdf", type: "PYQ"},
//     {name: "ADA-PYQ2", file: "ADA/ADA-PYQ2.pdf", type: "PYQ"},
//     {name: "ADA-PYQ3", file: "ADA/ADA-PYQ3.pdf", type: "PYQ"},
//     {name: "ADA-QP1", file: "ADA/ADA-QP1.pdf", type: "QP"},
//     {name: "ADA-MQP", file: "ADA/ADA-MQP.pdf", type: "MQP"},
//     // add more if needed
//   ],
//   "ADA-Lab": [
//     {name: "Msort", file: "ADA-Lab/Msort.c", type: "Lab Program"},
//     {name: "Qsort", file: "ADA-Lab/Qsort.c", type: "Lab Program"},
//     {name: "Oknapsack", file: "ADA-Lab/Oknapsack.c", type: "Lab Program"},
//     {name: "Ssort", file: "ADA-Lab/Ssort.c", type: "Lab Program"},
//     {name: "Tsort", file: "ADA-Lab/Tsort.c", type: "Lab Program"},
//     {name: "nqueen", file: "ADA-Lab/nqueen.c", type: "Lab Program"},
//     {name: "dijk", file: "ADA-Lab/dijk.c", type: "Lab Program"},
//     {name: "dijiks", file: "ADA-Lab/dijiks.c", type: "Lab Program"},
//     {name: "prim", file: "ADA-Lab/prim.c", type: "Lab Program"},
//     {name: "prims", file: "ADA-Lab/prims.c", type: "Lab Program"},
//     {name: "subset", file: "ADA-Lab/subset.c", type: "Lab Program"},
//     {name: "knapsack", file: "ADA-Lab/knapsack.c", type: "Lab Program"}
//   ],
//   "AI": [
//     {name: "AI-M1", file: "AI/AI-M1.pdf", type: "Module"},
//     {name: "AI-M2", file: "AI/AI-M2.pdf", type: "Module"},
//     {name: "AI-M3", file: "AI/AI-M3.pdf", type: "Module"},
//     {name: "AI-M4", file: "AI/AI-M4.pdf", type: "Module"},
//     {name: "AI-M5", file: "AI/AI-M5.pdf", type: "Module"},
//     {name: "AI-PYQ", file: "AI/AI-PYQ.pdf", type: "PYQ"},
//     {name: "AI-MQP", file: "AI/AI-MQP.pdf", type: "MQP"},
//     {name: "AI Question papers", file: "AI/AI Question papers.pdf", type: "PYQ"}
//   ],
//   "BIOLOGY": [
//     {name: "BIO-M1", file: "BIOLOGY/BIO-M1.pdf", type: "Module"},
//     {name: "BIO-M2", file: "BIOLOGY/BIO-M2.pdf", type: "Module"},
//     {name: "BIO-M3", file: "BIOLOGY/BIO-M3.pdf", type: "Module"},
//     {name: "BIO-M4", file: "BIOLOGY/BIO-M4.pdf", type: "Module"},
//     {name: "BIO-M5", file: "BIOLOGY/BIO-M5.pdf", type: "Module"},
//     {name: "BIO-PYQ", file: "BIOLOGY/BIO-PYQ.pdf", type: "PYQ"},
//     {name: "BIO-IMP-Q'S", file: "BIOLOGY/BIO-IMP-Q'S.pdf", type: "Important Qs"}
//   ],
//   "DBMS": [
//     {name: "DBMS-M1", file: "DBMS/DBMS-M1.pdf", type: "Module"},
//     {name: "DBMS-M2", file: "DBMS/DBMS-M2.pdf", type: "Module"},
//     {name: "DBMS-M3", file: "DBMS/DBMS-M3.pdf", type: "Module"},
//     {name: "DBMS-M4", file: "DBMS/DBMS-M4.pdf", type: "Module"},
//     {name: "DBMS-M5", file: "DBMS/DBMS-M5.pdf", type: "Module"},
//     {name: "DBMS-M5-QB", file: "DBMS/DBMS-M5-QB.pdf", type: "Question Bank"},
//     {name: "DBMS-MQP", file: "DBMS/DBMS-MQP.pdf", type: "MQP"},
//     {name: "DBMS-PYQ", file: "DBMS/DBMS-PYQ.pdf", type: "PYQ"}
//   ],
//   "DMS": [
//     {name: "DMS-M1", file: "DMS/DMS-M1.pdf", type: "Module"},
//     {name: "DMS-M2", file: "DMS/DMS-M2.pdf", type: "Module"},
//     {name: "DMS-M3", file: "DMS/DMS-M3.pdf", type: "Module"},
//     {name: "DMS-M4", file: "DMS/DMS-M4.pdf", type: "Module"},
//     {name: "DMS-DMS-PYQ", file: "DMS/DMS-PYQ.pdf", type: "PYQ"},
//     {name: "DMS-DMS-PYQ2", file: "DMS/DMS-PYQ2.pdf", type: "PYQ"},
//     {name: "DMS-DMS-PYQ3", file: "DMS/DMS-PYQ3.pdf", type: "PYQ"},
//     {name: "DMS-MQP", file: "DMS/DMS-MQP.pdf", type: "MQP"},
//     {name: "DMS-MPQ-S", file: "DMS/ DMS-MPQ-S.pdf", type: "MQP"}
//   ],
//   "UHV": [
//     {name: "BUHK408", file: "UHV/BUHK408.pdf", type: "Module"},
//     {name: "BUHK408-Regular", file: "UHV/BUHK408-regular-paper.pdf", type: "Regular Paper"},
//     {name: "UHV Mod 01", file: "UHV/UHV mod 01 .pdf", type: "Module"},
//     {name: "UHV Mod 02", file: "UHV/UHV mod 02 .pdf", type: "Module"},
//     {name: "UHV Mod 03", file: "UHV/UHV mod  03 .pdf", type: "Module"},
//     {name: "UHV Mod 04", file: "UHV/UHV mod 04 .pdf", type: "Module"},
//     {name: "UHV Mod 05", file: "UHV/UHV mod 05 .pdf", type: "Module"},
//     {name: "UHV Simplified", file: "UHV/uhv simp.pdf", type: "Notes"}
//   ]
// };

// // Function to render cards
// function renderCards() {
//   for (const subject in pdfData) {
//     const container = document.getElementById(`${subject}-cards`);
//     pdfData[subject].forEach(pdf => {
//       const card = document.createElement("a");
//       card.className = "card";
//       card.href = pdf.file;
//       card.target = "_blank";
//       card.innerHTML = `<h3>${pdf.name}</h3><p>${pdf.type}</p>`;
//       container.appendChild(card);
//     });
//   }
// }

// // Search Functionality
// document.getElementById("searchInput").addEventListener("input", function() {
//   const query = this.value.toLowerCase();
//   document.querySelectorAll(".card").forEach(card => {
//     const text = card.textContent.toLowerCase();
//     card.style.display = text.includes(query) ? "block" : "none";
//   });
// });

// // Initialize
// renderCards();

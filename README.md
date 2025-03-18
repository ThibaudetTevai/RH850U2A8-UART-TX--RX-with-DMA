# UART Transmission & Reception using DMA on RH850U2A/8  

## Project Overview  
This project demonstrates **UART communication** on the **RH850U2A/8** microcontroller, utilizing **DMA** for efficient data transfer.  
By leveraging **DMA**, the CPU load is minimized, ensuring fast and reliable UART communication.  

- **UART0 (RLIN30)** is used for transmission and reception via **SDMAC10**.  
- **UART1 (RLIN31)** is used for transmission and reception via **SDMAC11**.  
- The system enables continuous data transfer with minimal CPU intervention.  

## Hardware & Configuration  
- **Microcontroller**: RH850U2A/8  
- **UART Interfaces & Pin Mapping**:  

| UART | Module | TX Pin | RX Pin | DMA Channel |
|------|--------|--------|--------|-------------|
| **UART0** | **RLIN30** | **P10_6** | **P10_5** | **SDMAC10** |
| **UART1** | **RLIN31** | **P4_5** | **P4_4** | **SDMAC11** |

- **Baud Rate**: Configurable (default: 115200 bps)  
- **DMA Configuration**:  
  - **SDMAC10**: Handles UART0 TX/RX  
  - **SDMAC11**: Handles UART1 TX/RX  

## Setup & Compilation  
### **1️⃣ Environment Setup**  
- **CS+ for RH850** as the development environment.  


## Repository  
The full source code is available on GitHub:  
🔗 **[RH850U2A8 UART DMA Project]([https://github.com/ThibaudetTevai/](https://github.com/ThibaudetTevai/RH850U2A8-UART-TX--RX-with-DMA/)**

## Contributions  
If you find any issues or improvements, feel free to **open an issue** or **submit a pull request**.  

---

📩 For any questions or discussions, feel free to reach out! 🚀  

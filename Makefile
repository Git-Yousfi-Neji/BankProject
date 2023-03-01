# Makefile

# Compiler and flags
CC = g++
CFLAGS = -c -Wall
LFLAGS =

# Directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
ACCESSDATA_DIR = $(SRC_DIR)/AccessData
ACCOUNTDATA_DIR = $(SRC_DIR)/AccountData

# Files
MAIN = $(SRC_DIR)/main.cpp
ACCOUNT_DAO_IMPL = $(ACCESSDATA_DIR)/AccountDAOImpl.cpp
TRANSACTION_DAO_IMPL = $(ACCESSDATA_DIR)/TransactionDAOImpl.cpp
ACCOUNT = $(ACCOUNTDATA_DIR)/Account.cpp
TRANSACTION = $(ACCOUNTDATA_DIR)/Transaction.cpp
OBJ_MAIN = $(BUILD_DIR)/main.o
OBJ_ACCOUNT_DAO_IMPL = $(BUILD_DIR)/src/AccessData/AccountDAOImpl.o
OBJ_TRANSACTION_DAO_IMPL = $(BUILD_DIR)/src/AccessData/TransactionDAOImpl.o
OBJ_ACCOUNT = $(BUILD_DIR)/src/AccountData/Account.o
OBJ_TRANSACTION = $(BUILD_DIR)/src/AccountData/Transaction.o

# Targets
all: myApp

myApp: $(OBJ_MAIN) $(OBJ_ACCOUNT_DAO_IMPL) $(OBJ_TRANSACTION_DAO_IMPL) $(OBJ_ACCOUNT) $(OBJ_TRANSACTION)
	$(CC) $(LFLAGS) $^ -o $@

$(OBJ_MAIN): $(MAIN)
	mkdir -p $(dir $(OBJ_MAIN))
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) $< -o $@

$(OBJ_ACCOUNT_DAO_IMPL): $(ACCOUNT_DAO_IMPL)
	mkdir -p $(dir $(OBJ_ACCOUNT_DAO_IMPL))
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) $< -o $@

$(OBJ_TRANSACTION_DAO_IMPL): $(TRANSACTION_DAO_IMPL)
	mkdir -p $(dir $(OBJ_TRANSACTION_DAO_IMPL))
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) $< -o $@

$(OBJ_ACCOUNT): $(ACCOUNT)
	mkdir -p $(dir $(OBJ_ACCOUNT))
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) $< -o $@

$(OBJ_TRANSACTION): $(TRANSACTION)
	mkdir -p $(dir $(OBJ_TRANSACTION))
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) $< -o $@

clean:
	rm -rf $(BUILD_DIR) myApp

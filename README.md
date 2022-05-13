# JWT Decode Utility

Used to decode JWT tokens quickly from the CLI

```shell
jwt eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c
```

Outputs

```
{
    "alg": "none",
    "typ": "JWT"
}
.
{
    "iat": 1516239022,
    "name": "John Doe",
    "sub": "1234567890"
}
```

## Build

```shell
./configure && make
```

## Install

```shell
sudo make install
```
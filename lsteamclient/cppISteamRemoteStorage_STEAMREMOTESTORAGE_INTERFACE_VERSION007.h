#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite(void *, const char *, const void *, int32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead(void *, const char *, void *, int32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete(void *, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms(void *, const char *, ERemoteStoragePlatform);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize(void *, const char *);
extern int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp(void *, const char *);
extern ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount(void *);
extern const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize(void *, int, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota(void *, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount(void *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp(void *);
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp(void *, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload(void *, UGCHandle_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress(void *, UGCHandle_t, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails(void *, UGCHandle_t, AppId_t *, char **, int32 *, CSteamID *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead(void *, UGCHandle_t, void *, int32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount(void *);
extern UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle(void *, int32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile(void *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *, EWorkshopFileType);
extern PublishedFileUpdateHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility(void *, PublishedFileUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags(void *, PublishedFileUpdateHandle_t, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate(void *, PublishedFileUpdateHandle_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote(void *, PublishedFileId_t, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles(void *, CSteamID, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo(void *, EWorkshopVideoProvider, const char *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction(void *, PublishedFileId_t, EWorkshopFileAction);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction(void *, EWorkshopFileAction, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles(void *, EWorkshopEnumerationType, uint32, uint32, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
#ifdef __cplusplus
}
#endif

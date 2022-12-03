#define MYVERSION "1.91.0.1"

/*
    changelog

2022-02-14 00:03 UTC - kode54
- Sync lock RESIDfp creation
- Version is now 1.91

2022-02-12 01:48 UTC - kode54
- Removed serialization, now should be fairly safe to use properly
- Updated libsidplayfp again, with synchronization for its caching
- Properly support dual file MUS/STR files again
- Version is now 1.90

2022-01-13 01:36 UTC - kode54
- Updated libsidplay to version 2.3.1
- Version is now 1.80

2021-09-15 07:38 UTC - kode54
- Let's serialize this entire library because it effing sucks
- Version is now 1.70

2021-04-05 18:56 UTC - kode54
- Implemented support for foobar2000 1.6.1+ preferred sample rate.
  There's not much overhead to this anyway, since the library is
  just downsampling to the specified rate anyway.
- Version is now 1.61

2021-04-04 23:56 UTC - kode54
- Updated libsidplayfp to version 2.2.0
- Version is now 1.60

2020-02-28 23:11 UTC - kode54
- Eliminated fast forwarding from seeking, as it now makes the sinc
  resampler crash. It apparently had no useful effect anyway.
- Version is now 1.50

2020-02-15 02:39 UTC - kode54
- Restructured build configuration a bit, moving MSVC specific files
  into the VC project directory, and enabling missing optimizations
- Version is now 1.49

2020-02-13 03:04 UTC - kode54
- Implemented configurable stereo mode with configurable separation level
- Fixed description for 8580 filter setting in two places
- Version is now 1.48

2020-02-12 02:18 UTC - kode54
- Fix 3SID playback
- Version is now 1.47

2020-02-12 01:17 UTC - kode54
- Fixed song length database handling for unlisted files
- Improved handling of song lengths in the get_info() function
  to not modify the state of the loaded song
- Version is now 1.46

2020-02-11 09:10 UTC - kode54
- Reverted fade behavior
- Version is now 1.45

2020-02-11 08:47 UTC - kode54
- Updated libsidplayfp to version 2.0.1 or so
- Update to more recent foobar2000 SDK
- Updated to new song length system
- Fade is now in addition to length
- Default length is now configurable to include milliseconds
- Fixed various errors in the database and length handling
- Version is now 1.44

2018-06-14 02:04 UTC - kode54
- Added a safety check to part of sidplay-residfp, to help prevent crashes on
  files that otherwise have no signature to verify
- Version is now 1.43

2018-05-02 02:51 UTC - kode54
- Updated libsidplayfp
- Fixed a serious bug with how the 8580 filter curve was configured,
  as the updates changed the value type and range to match the 6581
- Version is now 1.42

2018-01-30 09:48 UTC - kode54
- Updated to version 1.4 SDK
- Version is now 1.41

2017-12-27 09:15 UTC - kode54
- Updated sidplay-residfp with two years worth of new changes
- Updated component to remove references to deprecated interfaces
- Version is now 1.40

2017-02-04 05:10 UTC - kode54
- Add link to about string
- Version is now 1.36

2016-05-19 05:36 UTC - kode54
- Updated sidplay-residfp
  - Now uses std::mutex locking for several globals, to fix race conditions
- Now compiled with MSVC 2015
- Version is now 1.35

2015-11-07 04:28 UTC - kode54
- Updated residfp to revision 2100
- Version is now 1.34

2015-01-05 02:40 UTC - kode54
- Updated residfp to revision 1863
- Remodeled around new sidplay-residfp
- Implemented support for now working resid builder
- Version is now 1.33

2014-04-01 00:40 UTC - kode54
- Updated residfp to revision 1516
- Version is now 1.32

2013-04-17 03:45 UTC - kode54
- Fixed stereo playback
- Version is now 1.31

2013-03-25 18:03 UTC - kode54
- Fixed stupid race condition with initializing reSIDfp
- Version is now 1.30

2012-11-26 13:08 UTC - kode54
- Updated sidplay-residfp
- Version is now 1.29

2012-11-25 02:16 UTC - kode54
- Updated sidplay-residfp
- Version is now 1.28

2012-02-19 20:01 UTC - kode54
- Added abort check to decoder
- Version is now 1.27

2012-02-19 01:36 UTC - kode54
- Updated residfp to revision 664
- Implemented resid filter curve configuration
- Version is now 1.26

2012-01-26 22:10 UTC - kode54
- Implemented clock speed and SID chip override controls
- Version is now 1.25

2011-12-22 21:18 UTC - kode54
- Updated to latest residfp library
- Version is now 1.24

2011-02-18 14:48 UTC - kode54
- Fixed relative path token matching for the profile path, for real this time
- Version is now 1.23

2011-02-03 14:47 UTC - kode54
- Fixed relative path token matching on configuration file read
- Version is now 1.22

2011-02-03 07:50 UTC - kode54
- Fixed relative paths for the profile path, which has file:// prepended to it
- Version is now 1.21

2011-02-02 02:49 UTC - kode54
- Implemented smart relative path support for song length database
- Version is now 1.20

2011-02-02 06:15 UTC - kode54
- Implemented song length database locking

2010-08-10 20:27 UTC - kode54
- Fixed archive path handling of path separators in sidplay
- File open function now reports unsupported file when SidTune loader fails
- Version is now 1.19

2010-07-20 05:23 UTC - kode54
- Updated to sidplay-residfp
- Version is now 1.18

2010-05-01 06:54 UTC - kode54
- Updated lengths database picker to use the last file's path
- Version is now 1.17

2010-04-14 20:47 UTC - kode54
- Amended preferences WM_INITDIALOG handler
- Version is now 1.16

2010-01-11 15:36 UTC - kode54
- Updated preferences page to 1.0 API
- Version is now 1.15

2009-04-16 22:30 UTC - kode54
- Updated libsidplay to latest CVS code
- Version is now 1.14

2005-01-12 20:28 UTC - kode54
- Changed subsong behavior, for great irrelevance
- Version is now 1.13

2004-02-12 21:18 UTC - kode54
- Undid changes from v1.11 as they led to heap corruption
- Version is now 1.12

2003-10-28 01:23 UTC - kode54
- SLDB loading is now faster
- Version is now 1.11

2003-10-08 12:06 UTC - kode54
- Removed unused bits per sample configuration, now hard coded to use 16
- Updated resid to 0.1.4-p1 ... could have saved a lot of hassle if I'd noticed this patched version
- Version is now 1.10

2003-10-08 10:36 UTC - kode54
- Added Song-Lengths Database support
- Added default length and indefinite play options

2003-08-30 17:46 UTC - kode54
- Changed info handler to add extra fields, which header doesn't properly document
- Version is now 1.04

2003-08-27 06:33 UTC - kode54
- Removed MUS from indexer
- Ignore default comment fields

2003-08-27 02:42 UTC - kode54
- Added support for MUS/STR files, added MUS/STR memory loader to SidTune.cpp
- Version is now 1.03

2003-08-26 23:17 UTC - kode54
- Indexer wasn't releasing pTune
- Updated libsidplay to latest CVS code, fixes one major memory leak
  There may be more memory leaks in libsidplay...buoy
- Version is now 1.02

2003-08-26 21:35 UTC - kode54
- Fixed info/comment string handler
- Version is now 1.01

2003-08-26 20:00 UTC - kode54
- Initial release
- Version is 1.0

*/

#pragma warning(disable: 26434 26481 26482 26485 26493)

#include <memory>

#include <foobar2000.h>
#include <coreDarkMode.h>

#include <atlbase.h>

#include <atlapp.h>

#include <atlcrack.h>
#include <atlctrls.h>
#include <atlmisc.h>

#include <../../libPPUI/wtl-pp.h>
#include <../helpers/atl-misc.h>
#include <../helpers/dropdown_helper.h>

#include "SidTuneMod.h"

#include <builders/resid-builder/resid.h>
#include <builders/residfp-builder/residfp.h>

#include <sidplayfp/SidConfig.h>
#include <sidplayfp/SidInfo.h>
#include <sidplayfp/SidTuneInfo.h>
#include <sidplayfp/sidplayfp.h>

#include <utils/SidDatabase.h>

#include "resource.h"

#include "roms.hpp"

// {7ABA4483-9480-4f9b-ADB5-BA2A495EAB22}
static const GUID guid_cfg_infinite = { 0x7aba4483, 0x9480, 0x4f9b, { 0xad, 0xb5, 0xba, 0x2a, 0x49, 0x5e, 0xab, 0x22 } };
// {6228BE43-CBB1-48E4-9488-0F4242091BB7}
static const GUID guid_cfg_deflength = { 0x6228be43, 0xcbb1, 0x48e4, { 0x94, 0x88, 0xf, 0x42, 0x42, 0x9, 0x1b, 0xb7 } };
// {4143484B-5A86-40f6-BD86-5D7B0A33D5BD}
static const GUID guid_cfg_fade = { 0x4143484b, 0x5a86, 0x40f6, { 0xbd, 0x86, 0x5d, 0x7b, 0xa, 0x33, 0xd5, 0xbd } };
// {9033CEAB-97E6-451f-B3DD-F7A875657E67}
static const GUID guid_cfg_rate = { 0x9033ceab, 0x97e6, 0x451f, { 0xb3, 0xdd, 0xf7, 0xa8, 0x75, 0x65, 0x7e, 0x67 } };
// {DF4F3EE1-E765-4bcb-8757-4B3A27BB0C8C}
static const GUID guid_cfg_db_path = { 0xdf4f3ee1, 0xe765, 0x4bcb, { 0x87, 0x57, 0x4b, 0x3a, 0x27, 0xbb, 0xc, 0x8c } };
// {6ECF3074-FA4D-4717-B0B1-C311C3AEBA80}
static const GUID guid_cfg_history_rate = { 0x6ecf3074, 0xfa4d, 0x4717, { 0xb0, 0xb1, 0xc3, 0x11, 0xc3, 0xae, 0xba, 0x80 } };
// {D0FC838C-9433-409A-93E4-0B89D3B4FB15}
static const GUID guid_cfg_clock_override = { 0xd0fc838c, 0x9433, 0x409a, { 0x93, 0xe4, 0xb, 0x89, 0xd3, 0xb4, 0xfb, 0x15 } };
// {9DF20A98-DFA4-461C-8F67-6009FD934590}
static const GUID guid_cfg_sid_override = { 0x9df20a98, 0xdfa4, 0x461c, { 0x8f, 0x67, 0x60, 0x9, 0xfd, 0x93, 0x45, 0x90 } };
// {8DCA8173-C912-4C79-BBCF-1AC005DCE6D3}
static const GUID guid_cfg_sid_filter_6581 = { 0x8dca8173, 0xc912, 0x4c79, { 0xbb, 0xcf, 0x1a, 0xc0, 0x5, 0xdc, 0xe6, 0xd3 } };
// {58ED05BF-A672-43D1-A87D-BD4D8BFCE7B3}
static const GUID guid_cfg_sid_filter_8580_old = { 0x58ed05bf, 0xa672, 0x43d1, { 0xa8, 0x7d, 0xbd, 0x4d, 0x8b, 0xfc, 0xe7, 0xb3 } };
// {69ABCEF1-F460-45A4-8583-DFF0501ADAC7}
static const GUID guid_cfg_sid_filter_8580 = { 0x69abcef1, 0xf460, 0x45a4, { 0x85, 0x83, 0xdf, 0xf0, 0x50, 0x1a, 0xda, 0xc7 } };
// {C9E01956-6EAB-46E3-AEA1-2A8A3A34382D}
static const GUID guid_cfg_sid_builder = { 0xc9e01956, 0x6eab, 0x46e3, { 0xae, 0xa1, 0x2a, 0x8a, 0x3a, 0x34, 0x38, 0x2d } };
// {0278879D-7C46-41A4-9F42-2786D32B5BBE}
static const GUID guid_cfg_stereo_separation = { 0x278879d, 0x7c46, 0x41a4, { 0x9f, 0x42, 0x27, 0x86, 0xd3, 0x2b, 0x5b, 0xbe } };

enum
{
    sid_builder_resid = 0,
    sid_builder_residfp = 1
};

enum
{
    default_cfg_infinite = 0,
    default_cfg_deflength = 180000,
    default_cfg_fade = 200,
    default_cfg_rate = 44100,
    default_cfg_clock_override = 0,
    default_cfg_sid_override = 0,
    default_cfg_sid_filter_6581 = 128,
    default_cfg_sid_filter_8580 = 128,
    default_cfg_sid_builder = sid_builder_residfp,
    default_cfg_stereo_separation = 50
};

static cfg_int cfg_infinite(guid_cfg_infinite, default_cfg_infinite);
static cfg_int cfg_deflength(guid_cfg_deflength, default_cfg_deflength);
static cfg_int cfg_fade(guid_cfg_fade, default_cfg_fade);
static cfg_int cfg_SampleRate(guid_cfg_rate, default_cfg_rate);
static cfg_int cfg_clock_override(guid_cfg_clock_override, default_cfg_clock_override);
static cfg_int cfg_sid_override(guid_cfg_sid_override, default_cfg_sid_override);
static cfg_int cfg_sid_filter_6581(guid_cfg_sid_filter_6581, default_cfg_sid_filter_6581);
static cfg_int cfg_sid_filter_8580(guid_cfg_sid_filter_8580, default_cfg_sid_filter_8580);
static cfg_int cfg_sid_filter_8580_old(guid_cfg_sid_filter_8580_old, -1);
static cfg_int cfg_sid_builder(guid_cfg_sid_builder, default_cfg_sid_builder);
static cfg_int cfg_stereo_separation(guid_cfg_stereo_separation, default_cfg_stereo_separation);
//static cfg_int cfg_bps("sid_bps",16);

#pragma region("InitQuit")

class InitQuitHandler : public initquit
{
public:
    InitQuitHandler() noexcept { };
    InitQuitHandler(const InitQuitHandler&) = delete;
    InitQuitHandler(const InitQuitHandler&&) = delete;
    InitQuitHandler& operator=(const InitQuitHandler&) = delete;
    InitQuitHandler& operator=(InitQuitHandler&&) = delete;
    virtual ~InitQuitHandler() { };

    void on_init() override
    {
        if (cfg_sid_filter_8580_old > 0)
        {
            if (cfg_sid_filter_8580_old <= 12500)
            {
                cfg_sid_filter_8580 = (cfg_sid_filter_8580_old - 150) * 128 / (12500 - 150);
            }
            else
            if (cfg_sid_filter_8580_old <= 22050)
            {
                cfg_sid_filter_8580 = 128 + ((cfg_sid_filter_8580_old - 12500) / (22050 - 12500));
            }
            else
            {
                cfg_sid_filter_8580 = 128;
            }

            cfg_sid_filter_8580_old = -1;
        }
    }

    void on_quit() noexcept override
    {
    }
};

#pragma endregion

#pragma region("HVSC")

static cfg_string _CfgDatabaseFilePath(guid_cfg_db_path, "");
static SidDatabase _Database;
static critical_section _DatabaseLock;
static bool _IsDatabaseLoaded = false;

/// <summary>
/// Replaces parts of the database path with pseudo variables.
/// </summary>
static void SanitizeDatabasePathName(const char * in, bool fromConfig, pfc::string_base & out)
{
    out.reset();

    if (in == nullptr || (in && *in == '\0'))
        return;

    pfc::string8 ModulePathName;

    ::uGetModuleFileName(NULL, ModulePathName);

    ModulePathName.truncate(ModulePathName.scan_filename() - 1);

    pfc::string8 ComponentPathName = core_api::get_my_full_path();

    ComponentPathName.truncate(ComponentPathName.scan_filename() - 1);

    const char * ProfileURI = core_api::get_profile_path();

    if (!pfc::stricmp_ascii_ex(ProfileURI, 7, "file://", 7))
        ProfileURI += 7;

    pfc::string8 ProfilePathName = ProfileURI;

    if (fromConfig)
    {
        while (*in)
        {
            t_size Index = pfc::string_find_first(in, '<');

            out.add_string(in, Index);

            if (Index != pfc::infinite_size)
            {
                if (!pfc::strcmp_partial(in + Index, "<player path>"))
                    out += ModulePathName;
                else
                if (!pfc::strcmp_partial(in + Index, "<profile path>"))
                    out += ProfilePathName;
                else
                if (!pfc::strcmp_partial(in + Index, "<component path>"))
                    out += ComponentPathName;

                Index = pfc::string_find_first(in, '>', Index);

                if (Index != pfc::infinite_size)
                    ++Index;
            }

            if (Index == pfc::infinite_size)
                Index = ::strlen(in);

            in += Index;
        }
    }
    else
    {
        while (*in)
        {
            const size_t ModulePathNameIndex = pfc::string_find_first(in, ModulePathName);

            t_size Index = ModulePathNameIndex;

            const size_t ComponentPathNameIndex = pfc::string_find_first(in, ComponentPathName);

            if (ComponentPathNameIndex < Index)
                Index = ComponentPathNameIndex;

            const size_t ProfilePathNameIndex = pfc::string_find_first(in, ProfilePathName);

            if (ProfilePathNameIndex < Index)
                Index = ProfilePathNameIndex;

            out.add_string(in, Index);

            if (Index != pfc::infinite_size)
            {
                if (Index == ComponentPathNameIndex)
                {
                    out += "<component path>";
                    in += Index + ComponentPathName.length();
                }
                else
                if (Index == ProfilePathNameIndex)
                {
                    out += "<profile path>";
                    in += Index + ProfilePathName.length();
                }
                else
                if (Index == ModulePathNameIndex)
                {
                    out += "<player path>";
                    in += Index + ModulePathName.length();
                }
            }

            if (Index == pfc::infinite_size)
                Index = ::strlen(in);

            in += Index;
        }
    }
}

static void LoadDatabase()
{
    pfc::string8 FilePath;

    ::SanitizeDatabasePathName(_CfgDatabaseFilePath, true, FilePath);

    if (FilePath.length() == 0)
        return;

    _IsDatabaseLoaded = _Database.open(pfc::stringcvt::string_wide_from_utf8(FilePath));
}

static void UnloadDatabase()
{
    _Database.close();

    _IsDatabaseLoaded = false;
}

#pragma endregion

#pragma region("Input")

static const char * extListEmpty[] = { NULL };
static const char * extListStr[] = { ".str", NULL };

static critical_section g_residfp_lock;

class InputHandler : public input_stubs
{
public:
    InputHandler() noexcept : _SampleRate(0), _BPS(0), _StereoSeparation(0), _Length(0), _SamplesPlayed(0), _Fade(0), _IsEOF(false), _IsFirstBlock(false) { }

    void open(service_ptr_t<file> p_file, const char * p_path, t_input_open_reason p_reason, abort_callback & p_abort)
    {
        if (p_reason == input_open_info_write)
            throw exception_tagging_unsupported();

        if (p_file.is_empty())
        {
            filesystem::g_open(p_file, p_path, filesystem::open_mode_read, p_abort);
        }

        _FileStats = p_file->get_stats(p_abort);

        _FileStats2 = p_file->get_stats2_((uint32_t) stats2_all, p_abort);

        if ((_FileStats2.m_size == 0) || (_FileStats2.m_size > (t_filesize)1 << 30))
            throw exception_io_unsupported_format();

        const char ** extList = (pfc::stricmp_ascii(pfc::string_extension(p_path), "mus") == 0) ? extListStr : extListEmpty;

        _Tune = std::make_unique<SidTuneMod>(p_file, std::string(p_path), extList);

        if (!_Tune->getStatus())
            throw exception_io_unsupported_format();

        _SampleRate = cfg_SampleRate;
    //  _BPS = cfg_bps;
        _StereoSeparation = cfg_stereo_separation;
    }

    unsigned get_subsong_count()
    {
        return _Tune->getInfo()->songs();
    }

    t_uint32 get_subsong(unsigned int subSongIndex) noexcept
    {
        return subSongIndex;
    }

    size_t extended_param(const GUID& type, size_t arg1, void *, size_t)
    {
        if (type == input_params::set_preferred_sample_rate)
        {
            _SampleRate = (int) arg1;
            return 1;
        }
        else
        if (type == input_params::seeking_expensive)
            return 1;
        else
            return 0;
    }

    void get_info(t_uint32 subSongIndex, file_info& fileInfo, abort_callback&)
    {
        const SidTuneInfo * TuneInfo = _Tune->getInfo();

        if (TuneInfo == nullptr)
            return;

    //  fileInfo.info_set_int("samplerate", _SampleRate);
        fileInfo.info_set("encoding", "synthesized");
        fileInfo.info_set_int("channels", 2);
        fileInfo.info_set_int("sid_chip_count", TuneInfo->sidChips());

        {
            const unsigned int InfoStringCount = TuneInfo->numberOfInfoStrings();

            if (InfoStringCount >= 1 && TuneInfo->infoString(0) && TuneInfo->infoString(0)[0])
                fileInfo.meta_add(TuneInfo->songs() > 1 ? "album" : "title", pfc::stringcvt::string_utf8_from_ansi(TuneInfo->infoString(0)));

            if (InfoStringCount >= 2 && TuneInfo->infoString(1) && TuneInfo->infoString(1)[0])
                fileInfo.meta_add("artist", pfc::stringcvt::string_utf8_from_ansi(TuneInfo->infoString(1)));

            if (InfoStringCount >= 3 && TuneInfo->infoString(2) && TuneInfo->infoString(2)[0])
                fileInfo.meta_add("copyright", pfc::stringcvt::string_utf8_from_ansi(TuneInfo->infoString(2)));

            for (unsigned int j = 3; j < InfoStringCount; ++j)
            {
                if (TuneInfo->infoString(j) && TuneInfo->infoString(j)[0])
                    fileInfo.meta_add("info", pfc::stringcvt::string_utf8_from_ansi(TuneInfo->infoString(j)));
            }
        }

        {
            const unsigned int CommentCount = TuneInfo->numberOfCommentStrings();

            for (unsigned int CommentIndex = 0; CommentIndex < CommentCount; ++CommentIndex)
            {
                if (TuneInfo->commentString(CommentIndex) && TuneInfo->commentString(CommentIndex)[0] && strcmp(TuneInfo->commentString(CommentIndex), "--- SAVED WITH SIDPLAY ---"))
                    fileInfo.meta_add("comment", pfc::stringcvt::string_utf8_from_ansi(TuneInfo->commentString(CommentIndex)));
            }
        }

        if (TuneInfo->clockSpeed() && (TuneInfo->clockSpeed() == SidTuneInfo::CLOCK_NTSC || TuneInfo->clockSpeed() == SidTuneInfo::CLOCK_PAL))
            fileInfo.info_set("clock_speed", TuneInfo->clockSpeed() == SidTuneInfo::CLOCK_NTSC ? "NTSC" : "PAL");

        fileInfo.info_set("sid_model", TuneInfo->sidModel(0) == SidTuneInfo::SIDMODEL_8580 ? "8580" : "6581");

        {
            unsigned int Length = (unsigned int) cfg_deflength;

            {
                insync(_DatabaseLock);

                if (!_IsDatabaseLoaded)
                    ::LoadDatabase();
            }

            if (_IsDatabaseLoaded)
            {
                char md5[SidTune::MD5_LENGTH + 1];

                _Tune->createMD5New(md5);

                const int LengthFromDatabase = _Database.lengthMs(md5, subSongIndex + 1);

                if (LengthFromDatabase > 0)
                    Length = LengthFromDatabase;
            }

            fileInfo.set_length(double(Length) / 1000.0);
        }
    }

    t_filestats get_file_stats(abort_callback &) noexcept
    {
        return _FileStats;
    }

    t_filestats2 get_stats2(uint32_t, abort_callback &) noexcept
    {
        return _FileStats2;
    }

    void decode_initialize(t_uint32 subSongIndex, unsigned flags, abort_callback & abortHandler)
    {
        _IsFirstBlock = true;

        _Tune->selectSong(subSongIndex + 1);

        const int RequiredChipCount = _Tune->getInfo()->sidChips();

        {
            _Length = (unsigned int) cfg_deflength;

            {
                insync(_DatabaseLock);

                if (!_IsDatabaseLoaded)
                    LoadDatabase();
            }

            if (_IsDatabaseLoaded)
            {
                const int LengthFromDatabase = _Database.lengthMs(*_Tune);

                if (LengthFromDatabase > 0)
                    _Length = LengthFromDatabase;
            }
        }

        _Engine = std::make_unique<sidplayfp>();

        _Engine->setRoms(kernel, basic, chargen);

        if (!_Engine->load(_Tune.get()))
            throw exception_io_data(_Engine->error());

        _Builder = nullptr;

        switch (cfg_sid_builder)
        {
            case sid_builder_residfp:
            {
                insync(g_residfp_lock);

                std::unique_ptr<ReSIDfpBuilder> NewBuilder = std::make_unique<ReSIDfpBuilder>("ReSIDfp");

                if (NewBuilder)
                {
                    NewBuilder->create((_Engine->info()).maxsids());

                    if (NewBuilder->getStatus())
                    {
                        NewBuilder->filter(true);
                        NewBuilder->filter6581Curve(cfg_sid_filter_6581 / 256.);
                        NewBuilder->filter8580Curve(cfg_sid_filter_8580 / 256.);
                    }

                    if (!NewBuilder->getStatus())
                        throw exception_io_data();

                    _Builder = std::move(NewBuilder);
                }
                break;
            }

            case sid_builder_resid:
            {
                std::unique_ptr<ReSIDBuilder> NewBuilder = std::make_unique<ReSIDBuilder>("ReSID");

                if (NewBuilder)
                {
                    NewBuilder->create((_Engine->info()).maxsids());

                    if (NewBuilder->getStatus())
                        NewBuilder->filter(true);

                    if (!NewBuilder->getStatus())
                        throw exception_io_data();

                    _Builder = std::move(NewBuilder);
                }
                break;
            }

            default:
                throw exception_io_unsupported_feature();
        }

        {
            SidConfig Config = _Engine->config();

            Config.frequency = _SampleRate;
            Config.playback = SidConfig::STEREO;
            Config.sidEmulation = _Builder.get();

            if (cfg_clock_override)
            {
                Config.forceC64Model = true;
                Config.defaultC64Model = (cfg_clock_override == 1) ? SidConfig::PAL : SidConfig::NTSC;
            }

            if (cfg_sid_override)
            {
                Config.forceSidModel = true;
                Config.defaultSidModel = (cfg_sid_override == 1) ? SidConfig::MOS6581 : SidConfig::MOS8580;
            }

            if (!_Engine->config(Config))
                throw exception_io_data(_Engine->error());
        }

        _SamplesPlayed = 0;

        _IsEOF = false;

        if (!cfg_infinite || (flags & input_flag_no_looping))
        {
            _Length = (unsigned int)((__int64) _Length * _SampleRate / 1000) * 2;
            _Fade = (cfg_fade * _SampleRate / 1000) * 2;
        }
        else
        {
            _Length = 0;
        }

        _SampleBuffer.set_count((t_size)10240 * 2);
    }

    bool decode_run(audio_chunk & audioChunk, abort_callback & abortHandler)
    {
        abortHandler.check();

        if (_IsEOF || (_Length && _SamplesPlayed >= _Length))
            return false;

        int SampleCount = _Length - _SamplesPlayed;

        if (!_Length || (SampleCount > 10240 * 2))
            SampleCount = 10240 * 2;

        audioChunk.grow_data_size(SampleCount);
        audioChunk.set_srate(_SampleRate);
        audioChunk.set_channels(2);

        audio_sample * Samples = audioChunk.get_data();

        if (Samples == nullptr)
            return false;

        // Render an audio chunk.
        const int SamplesWritten = _Engine->play(_SampleBuffer.get_ptr(), SampleCount);

        // Convert the samples from 16-bit signed integer to audio_sample format.
        {
            audio_math::convert_from_int16(_SampleBuffer.get_ptr(), SamplesWritten, Samples, (audio_sample)1.0);

            if (SamplesWritten < SampleCount)
            {
                if (_Engine->error())
                    throw exception_io_data(_Engine->error());

                _IsEOF = true;
            }
        }

        audio_sample ScaleFactor = (audio_sample) _StereoSeparation * (audio_sample)0.005; /* percent, pre-scaled by half */

        // Convert to mid-side. Scale side difference according to user setting.
        {
            audio_sample * p = Samples;

            for (int i = 0; i < SamplesWritten; i += 2)
            {
                const audio_sample mid  = (p[0] + p[1]) * (audio_sample)0.5;
                const audio_sample side = (p[0] - p[1]) * ScaleFactor;

                *p++ = mid + side;
                *p++ = mid - side;
            }
        }

        audioChunk.set_sample_count(SamplesWritten / 2);

        {
            const unsigned int Head = _SamplesPlayed;
            const unsigned int Tail = SamplesWritten;

            if ((_Length != 0) && (Tail + _Fade > _Length))
            {
                audio_sample * p = Samples;

                ScaleFactor = (audio_sample)1.0 / _Fade;

                {
                    for (unsigned int Index = Head; Index < Tail; Index += 2)
                    {
                        if (Index > _Length)
                        {
                            *p++ = (audio_sample)0.0;
                            *p++ = (audio_sample)0.0;
                        }
                        else
                        {
                            const audio_sample bleh = (audio_sample)(_Length - Index) * ScaleFactor;

                            *p++ *= bleh;
                            *p++ *= bleh;
                        }
                    }
                }
            }
        }

        _SamplesPlayed += SamplesWritten;

        return true;
    }

    void decode_seek(double p_seconds, abort_callback & p_abort)
    {
        _IsFirstBlock = true;

        unsigned samples = unsigned(audio_math::time_to_samples(p_seconds, _SampleRate));

        samples *= 2;

        if (samples < _SamplesPlayed)
        {
            decode_initialize(_Tune->getInfo()->currentSong(), input_flag_playback | (_Length ? input_flag_no_looping : 0), p_abort);
        }

        pfc::array_t<t_int16> sample_buffer;

        sample_buffer.grow_size((t_size)10240 * 2);
        _IsEOF = false;
/*
        unsigned remain = ( samples - played ) % 32;
        played /= 32;
        samples /= 32;
        m_engine->fastForward( 100 * 32 );
*/
        while (_SamplesPlayed < samples)
        {
            p_abort.check();

            unsigned todo = samples - _SamplesPlayed;

            if (todo > 10240 * 2)
                todo = 10240 * 2;

            unsigned done;
            {
                done = _Engine->play(sample_buffer.get_ptr(), todo);
            }

            if (done < todo)
            {
                if (_Engine->error())
                    throw exception_io_data(_Engine->error());

                _IsEOF = true;
                break;
            }

            _SamplesPlayed += todo;
        }
/*
        played *= 32;
        m_engine->fastForward( 100 );

        if ( remain )
            played += m_engine->play( sample_buffer.get_ptr(), remain );
*/
    }

    bool decode_can_seek() noexcept
    {
        return true;
    }

    bool decode_get_dynamic_info(file_info & fileInfo, double & timestampDelta)
    {
        if (!_IsFirstBlock)
            return false;

        fileInfo.info_set_int("samplerate", _SampleRate);

        timestampDelta = 0.0;
        _IsFirstBlock = false;

        return true;
    }

    void retag_set_info(t_uint32 p_subsong, const file_info & p_info, abort_callback & p_abort)
    {
        throw exception_tagging_unsupported();
    }

    void retag_commit(abort_callback&)
    {
        throw exception_tagging_unsupported();
    }

    void remove_tags(abort_callback&)
    {
        throw exception_tagging_unsupported();
    }

    static bool g_is_our_content_type(const char * contentType) noexcept
    {
        return false;
    }

    static bool g_is_our_path(const char * p_path, const char * p_extension) noexcept
    {
        return !_stricmp(p_extension, "sid") || !_stricmp(p_extension, "mus");
    }

    static GUID g_get_guid() noexcept
    {
        return { 0x7fff51a2, 0x5130, 0x4307, { 0x95, 0x22, 0x16, 0xf9, 0x74, 0xd, 0x61, 0xde } };
    }

    static const char * g_get_name() noexcept
    {
        return "sidplay";
    }

    static GUID g_get_preferences_guid() noexcept
    {
        return { 0x206017ac, 0x421, 0x4d37, { 0x9b, 0x1f, 0x99, 0xb9, 0xea, 0xde, 0x74, 0x4e } };
    }

private:
    int _SampleRate, _BPS, _StereoSeparation;

    unsigned int _Length;
    unsigned int _SamplesPlayed;
    unsigned int _Fade;

    bool _IsFirstBlock;
    bool _IsEOF;

    std::unique_ptr<SidTuneMod> _Tune;
    std::unique_ptr<sidplayfp> _Engine;
    std::unique_ptr<sidbuilder> _Builder;

    pfc::array_t<t_int16> _SampleBuffer;

    t_filestats _FileStats;
    t_filestats2 _FileStats2;
};

#pragma endregion

#pragma region("Preferences")

const char * parseTime(const char * str, int_least32_t & result); // From "SidDatabase.cpp"

static cfg_dropdown_history cfg_history_rate(guid_cfg_history_rate, 16);

static const unsigned int _SampleRates[] = { 8000, 11025, 16000, 22050, 24000, 32000, 44100, 48000, 64000, 88200, 96000 };

class CMyPreferences : public CDialogImpl<CMyPreferences>, public preferences_page_instance
{
public:
    CMyPreferences(preferences_page_callback::ptr callback) : _PageCallback(callback)
    {
    }

    //Note that we don't bother doing anything regarding destruction of our class.
    //The host ensures that our dialog is destroyed first, then the last reference to our preferences_page_instance object is released, causing our object to be deleted.

    //dialog resource ID
    enum
    {
        IDD = IDD_CONFIG
    };

    // preferences_page_instance methods (not all of them - get_wnd() is supplied by preferences_page_impl helpers)
    t_uint32 get_state() override;
    void apply() override;
    void reset() override;

    BEGIN_MSG_MAP(CMyPreferences)
        MSG_WM_INITDIALOG(OnInitDialog)
        COMMAND_HANDLER_EX(IDC_INFINITE, BN_CLICKED, OnButtonClick)
        COMMAND_HANDLER_EX(IDC_DB_PATH_SET, BN_CLICKED, OnSetDatabasePath)
        COMMAND_HANDLER_EX(IDC_DB_PATH_CLEAR, BN_CLICKED, OnClearDatabasePath)
        COMMAND_HANDLER_EX(IDC_DLENGTH, EN_CHANGE, OnEditChange)
        COMMAND_HANDLER_EX(IDC_FADE, EN_CHANGE, OnEditChange)
        COMMAND_HANDLER_EX(IDC_SAMPLERATE, CBN_EDITCHANGE, OnEditChange)
        COMMAND_HANDLER_EX(IDC_SAMPLERATE, CBN_SELCHANGE, OnSelectionChange)
        COMMAND_HANDLER_EX(IDC_SID_BUILDER, CBN_SELCHANGE, OnSelectionChange)
        COMMAND_HANDLER_EX(IDC_CLOCK_OVERRIDE, CBN_SELCHANGE, OnSelectionChange)
        COMMAND_HANDLER_EX(IDC_SID_OVERRIDE, CBN_SELCHANGE, OnSelectionChange)
        MSG_WM_HSCROLL(OnHScroll);
        DROPDOWN_HISTORY_HANDLER(IDC_SAMPLERATE, cfg_history_rate)
    END_MSG_MAP()

private:
    BOOL OnInitDialog(CWindow, LPARAM);
    void OnEditChange(UINT, int, CWindow);
    void OnSelectionChange(UINT, int, CWindow);
    void OnButtonClick(UINT, int, CWindow);
    void OnSetDatabasePath(UINT, int, CWindow);
    void OnClearDatabasePath(UINT, int, CWindow);
    void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar pScrollBar);
    bool HasChanged();
    void OnChanged();

    void UpdateDatabaseStatusText() const noexcept;

private:
    const preferences_page_callback::ptr _PageCallback;

    fb2k::CCoreDarkModeHooks _DarkModeHooks;

    CTrackBarCtrl _Slider6581;
    CTrackBarCtrl _Slider8580;
    CTrackBarCtrl _SliderSsep;
};

t_uint32 CMyPreferences::get_state()
{
    t_uint32 state = preferences_state::resettable | preferences_state::dark_mode_supported;

    if (HasChanged())
        state |= preferences_state::changed;

    return state;
}

void CMyPreferences::reset()
{
    SendDlgItemMessage(IDC_INFINITE, BM_SETCHECK, default_cfg_infinite);
    SendDlgItemMessage(IDC_SID_BUILDER, CB_SETCURSEL, default_cfg_sid_builder);
    SendDlgItemMessage(IDC_CLOCK_OVERRIDE, CB_SETCURSEL, default_cfg_clock_override);
    SendDlgItemMessage(IDC_SID_OVERRIDE, CB_SETCURSEL, default_cfg_sid_override);

    ::uSetDlgItemText(m_hWnd, IDC_DLENGTH, pfc::format_time_ex((double) default_cfg_deflength / 1000.0));
    ::uSetDlgItemText(m_hWnd, IDC_DB_PATH, "");

    SetDlgItemInt(IDC_SAMPLERATE, default_cfg_rate, FALSE);
    SetDlgItemInt(IDC_FADE, default_cfg_fade, FALSE);

    _Slider6581.SetPos(default_cfg_sid_filter_6581);
    pfc::string8_fast temp = pfc::format_float(default_cfg_sid_filter_6581 / 256., 0, 2);
    ::uSetDlgItemText(m_hWnd, IDC_TEXT_6581, temp);

    _Slider8580.SetPos(default_cfg_sid_filter_8580);
    temp = pfc::format_float(default_cfg_sid_filter_8580 / 256., 0, 2);
    ::uSetDlgItemText(m_hWnd, IDC_TEXT_8580, temp);

    _SliderSsep.SetPos(default_cfg_stereo_separation);
    temp = pfc::format_int(default_cfg_stereo_separation);
    temp += "%";
    ::uSetDlgItemText(m_hWnd, IDC_TEXT_SSEP, temp);

    OnChanged();
}

void CMyPreferences::apply()
{
    {
        int SampleRate = GetDlgItemInt(IDC_SAMPLERATE, NULL, FALSE);

        if (SampleRate < 6000)
            SampleRate = 6000;
        else
        if (SampleRate > 192000)
            SampleRate = 192000;

        SetDlgItemInt(IDC_SAMPLERATE, SampleRate, FALSE);

        char temp[16];

        ::_itoa_s(SampleRate, temp, _countof(temp), 10);

        cfg_history_rate.add_item(temp);

        cfg_SampleRate = SampleRate;
    }

    {
        pfc::string8 out;

        ::uGetDlgItemText(m_hWnd, IDC_DB_PATH, out);

        pfc::string8 DatabaseFilePath;

        SanitizeDatabasePathName(out, false, DatabaseFilePath);

        _CfgDatabaseFilePath = DatabaseFilePath;

        {
            insync(_DatabaseLock);

            UnloadDatabase();
            LoadDatabase();
        }

        UpdateDatabaseStatusText();
    }

    {
        pfc::string8 LengthString;

        ::uGetDlgItemText(m_hWnd, IDC_DLENGTH, LengthString);

        int_least32_t Timestamp = 0;

        try
        {
            const char * bar = LengthString.get_ptr();

            ::parseTime(bar, Timestamp);
        }
        catch (...)
        {
        }

        if (Timestamp)
            cfg_deflength = Timestamp;
        else
            ::uSetDlgItemText(m_hWnd, IDC_DLENGTH, pfc::format_time_ex((double) cfg_deflength / 1000.0));
    }

    cfg_fade = GetDlgItemInt(IDC_FADE, NULL, FALSE);
    cfg_infinite = (t_int32)SendDlgItemMessage(IDC_INFINITE, BM_GETCHECK);
    cfg_clock_override = (t_int32)SendDlgItemMessage(IDC_CLOCK_OVERRIDE, CB_GETCURSEL);
    cfg_sid_override = (t_int32)SendDlgItemMessage(IDC_SID_OVERRIDE, CB_GETCURSEL);
    cfg_sid_builder = (t_int32)SendDlgItemMessage(IDC_SID_BUILDER, CB_GETCURSEL);
    cfg_sid_filter_6581 = _Slider6581.GetPos();
    cfg_sid_filter_8580 = _Slider8580.GetPos();
    cfg_stereo_separation = _SliderSsep.GetPos();

    OnChanged();
}

BOOL CMyPreferences::OnInitDialog(CWindow, LPARAM)
{
    SendDlgItemMessage(IDC_INFINITE, BM_SETCHECK, cfg_infinite);

    ::uSetDlgItemText(m_hWnd, IDC_DLENGTH, pfc::format_time_ex((double) cfg_deflength / 1000.0));
    ::uSetDlgItemText(m_hWnd, IDC_DB_PATH, _CfgDatabaseFilePath);

    UpdateDatabaseStatusText();

    {
        CWindow w;

        {
            char temp[16];

            SetDlgItemInt(IDC_FADE, cfg_fade, FALSE);

            ::uSendMessage(GetDlgItem(IDC_FADE), EM_LIMITTEXT, 3, 0);

            for (int n = _countof(_SampleRates); n--;)
            {
                if (_SampleRates[n] != cfg_SampleRate)
                {
                    _itoa_s(_SampleRates[n], temp, _countof(temp), 10);
                    cfg_history_rate.add_item(temp);
                }
            }

            _itoa_s(cfg_SampleRate, temp, _countof(temp), 10);

            cfg_history_rate.add_item(temp);

            w = GetDlgItem(IDC_SAMPLERATE);

            cfg_history_rate.setup_dropdown(w);
            ::SendMessage(w, CB_SETCURSEL, 0, 0);
        }

        w = GetDlgItem(IDC_SID_BUILDER);

        ::uSendMessageText(w, CB_ADDSTRING, 0, "ReSID");
        ::uSendMessageText(w, CB_ADDSTRING, 0, "ReSIDfp");
        ::SendMessage(w, CB_SETCURSEL, cfg_sid_builder, 0);

        w = GetDlgItem(IDC_CLOCK_OVERRIDE);

        ::uSendMessageText(w, CB_ADDSTRING, 0, "As input file specifies");
        ::uSendMessageText(w, CB_ADDSTRING, 0, "Force PAL");
        ::uSendMessageText(w, CB_ADDSTRING, 0, "Force NTSC");
        ::SendMessage(w, CB_SETCURSEL, cfg_clock_override, 0);

        w = GetDlgItem(IDC_SID_OVERRIDE);

        ::uSendMessageText(w, CB_ADDSTRING, 0, "As input file specifies");
        ::uSendMessageText(w, CB_ADDSTRING, 0, "Force 6581");
        ::uSendMessageText(w, CB_ADDSTRING, 0, "Force 8580");
        ::SendMessage(w, CB_SETCURSEL, cfg_sid_override, 0);
    }

    pfc::string8_fast temp;

    _Slider6581 = GetDlgItem(IDC_SLIDER_6581);
    _Slider6581.SetRangeMin(0);
    _Slider6581.SetRangeMax(256);
    _Slider6581.SetPos(cfg_sid_filter_6581);

    temp = pfc::format_float(cfg_sid_filter_6581 / 256., 0, 2);

    ::uSetDlgItemText(m_hWnd, IDC_TEXT_6581, temp);

    if (cfg_sid_builder != sid_builder_residfp)
        _Slider6581.EnableWindow(FALSE);

    _Slider8580 = GetDlgItem(IDC_SLIDER_8580);
    _Slider8580.SetRangeMin(0);
    _Slider8580.SetRangeMax(256);
    _Slider8580.SetPos(cfg_sid_filter_8580);

    temp = pfc::format_float(cfg_sid_filter_8580 / 256., 0, 2);

    ::uSetDlgItemText(m_hWnd, IDC_TEXT_8580, temp);

    if (cfg_sid_builder != sid_builder_residfp)
        _Slider8580.EnableWindow(FALSE);

    _SliderSsep = GetDlgItem(IDC_SLIDER_SSEP);
    _SliderSsep.SetRangeMin(0);
    _SliderSsep.SetRangeMax(150);
    _SliderSsep.SetPos(cfg_stereo_separation);

    temp = pfc::format_int(cfg_stereo_separation);
    temp += "%";

    ::uSetDlgItemText(m_hWnd, IDC_TEXT_SSEP, temp);

    _DarkModeHooks.AddDialogWithControls(*this);

    return FALSE;
}

void CMyPreferences::OnEditChange(UINT, int, CWindow)
{
    OnChanged();
}

void CMyPreferences::OnSelectionChange(UINT, int, CWindow wnd)
{
    if (wnd == GetDlgItem(IDC_SID_BUILDER))
    {
        const BOOL Enable = wnd.SendMessage(CB_GETCURSEL) == sid_builder_residfp;

        _Slider6581.EnableWindow(Enable);
        _Slider8580.EnableWindow(Enable);
    }

    OnChanged();
}

void CMyPreferences::OnButtonClick(UINT, int, CWindow)
{
    OnChanged();
}

void CMyPreferences::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar pScrollBar)
{
    pfc::string8_fast temp;

    if (pScrollBar.m_hWnd == _Slider6581.m_hWnd)
    {
        temp = pfc::format_float(_Slider6581.GetPos() / 256., 0, 2);
        ::uSetDlgItemText(m_hWnd, IDC_TEXT_6581, temp);
    }
    else
    if (pScrollBar.m_hWnd == _Slider8580.m_hWnd)
    {
        temp = pfc::format_float(_Slider8580.GetPos() / 256., 0, 2);
        ::uSetDlgItemText(m_hWnd, IDC_TEXT_8580, temp);
    }
    else
    if (pScrollBar.m_hWnd == _SliderSsep.m_hWnd)
    {
        temp = pfc::format_int(_SliderSsep.GetPos());
        temp += "%";
        ::uSetDlgItemText(m_hWnd, IDC_TEXT_SSEP, temp);
    }

    OnChanged();
}

void CMyPreferences::OnSetDatabasePath(UINT, int, CWindow)
{
    pfc::string8 NewDatabaseFilePath;

    ::uGetDlgItemText(m_hWnd, IDC_DB_PATH, NewDatabaseFilePath);

    pfc::string8 DatabaseFilePath;

    ::SanitizeDatabasePathName(NewDatabaseFilePath, true, DatabaseFilePath);

    pfc::string8 DatabaseDirectoryPathName(DatabaseFilePath);

    DatabaseDirectoryPathName.truncate(DatabaseDirectoryPathName.scan_filename());

    if (::uGetOpenFileName(core_api::get_main_window(), "Song length database|Songlengths.md5", 1, 0, "Choose SidPlay Song-Lengths Database...", DatabaseDirectoryPathName, DatabaseFilePath, false))
    {
        ::SanitizeDatabasePathName(DatabaseFilePath, false, NewDatabaseFilePath);

        ::uSetDlgItemText(m_hWnd, IDC_DB_PATH, NewDatabaseFilePath);

        OnChanged();
    }
}

void CMyPreferences::OnClearDatabasePath(UINT, int, CWindow)
{
    ::uSetDlgItemText(m_hWnd, IDC_DB_PATH, "");
    OnChanged();
}

bool CMyPreferences::HasChanged()
{
    bool IsChanged = false;

    if (!IsChanged && GetDlgItemInt(IDC_SAMPLERATE, NULL, FALSE) != cfg_SampleRate)
        IsChanged = true;

    if (!IsChanged && GetDlgItemInt(IDC_FADE, NULL, FALSE) != cfg_fade)
        IsChanged = true;

    if (!IsChanged && SendDlgItemMessage(IDC_INFINITE, BM_GETCHECK) != cfg_infinite)
        IsChanged = true;

    if (!IsChanged && SendDlgItemMessage(IDC_CLOCK_OVERRIDE, CB_GETCURSEL) != cfg_clock_override)
        IsChanged = true;

    if (!IsChanged && SendDlgItemMessage(IDC_SID_OVERRIDE, CB_GETCURSEL) != cfg_sid_override)
        IsChanged = true;

    if (!IsChanged && SendDlgItemMessage(IDC_SID_BUILDER, CB_GETCURSEL) != cfg_sid_builder)
        IsChanged = true;

    if (!IsChanged && _Slider6581.GetPos() != cfg_sid_filter_6581)
        IsChanged = true;

    if (!IsChanged && _Slider8580.GetPos() != cfg_sid_filter_8580)
        IsChanged = true;

    if (!IsChanged && _SliderSsep.GetPos() != cfg_stereo_separation)
        IsChanged = true;

    if (!IsChanged)
    {
        pfc::string8 Text;

        ::uGetDlgItemText(m_hWnd, IDC_DB_PATH, Text);

        pfc::string8 DatabaseFilePath;

        ::SanitizeDatabasePathName(Text, false, DatabaseFilePath);

        IsChanged = (::stricmp_utf8(DatabaseFilePath, _CfgDatabaseFilePath) != 0);
    }

    if (!IsChanged)
    {
        pfc::string8 Text;

        uGetDlgItemText(m_hWnd, IDC_DLENGTH, Text);

        int_least32_t Timestamp = 0;

        try
        {
            const char * bar = Text.get_ptr();

            const char * end = ::parseTime(bar, Timestamp);
        }
        catch (...)
        {
        }

        IsChanged = (Timestamp && Timestamp != cfg_deflength);
    }

    return IsChanged;
}

void CMyPreferences::OnChanged()
{
    //tell the host that our state has changed to enable/disable the apply button appropriately.
    _PageCallback->on_state_changed();
}

void CMyPreferences::UpdateDatabaseStatusText() const noexcept
{
    insync(_DatabaseLock);

    ::uSetDlgItemText(m_hWnd, IDC_DB_STATUS, _IsDatabaseLoaded ? "Database loaded.": "Database not loaded.");
}

#pragma endregion

#pragma region("Preferences Page")

class PreferencePage : public preferences_page_impl<CMyPreferences>
{
public:
    PreferencePage() noexcept { };
    PreferencePage(const PreferencePage&) = delete;
    PreferencePage(const PreferencePage&&) = delete;
    PreferencePage& operator=(const PreferencePage&) = delete;
    PreferencePage& operator=(PreferencePage&&) = delete;
    virtual ~PreferencePage() { }

    const char * get_name() noexcept override
    {
        return InputHandler::g_get_name();
    }

    GUID get_guid() noexcept override
    {
        return InputHandler::g_get_preferences_guid();
    }

    GUID get_parent_guid() noexcept override
    {
        return guid_input;
    }
};

#pragma endregion

DECLARE_FILE_TYPE("SID files", "*.SID;*.MUS");

static initquit_factory_t<InitQuitHandler> _InitQuitFactory;
static input_factory_t<InputHandler> _InputFactory;
static preferences_page_factory_t<PreferencePage> _PreferencePageFactory;

#include "Patrons.h"

DECLARE_COMPONENT_VERSION("sidplay", MYVERSION, "Based on residfp.\n\nLicensed under the GNU GPL, see COPYING.txt.\n\nhttps://www.patreon.com/kode54\n\n" MY_PATRONS);

VALIDATE_COMPONENT_FILENAME("foo_sid.dll");
